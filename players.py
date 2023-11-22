import colors
from mr305 import tile_size, border_distance_x, border_distance_y, screen
from board import B

from pygame import draw, font
from pygame.display import update


class Player():
    def __init__(self, id : str, color : tuple,  y_offset : int, position : int = 1):
        self.id = id

        # For the drawing part
        self.y_offset = y_offset
        self.position = position
        self.color = color
        self.border_color = colors.BG_COLOR
        self.radius = 10
        self.width = 3

        # In order to check if tha plyer is moving 
        self.is_moving = False

    
    def __repr__(self):
        return self.id
    
    def get_row_and_col_index(self, index):
        row : int = 0
        col : int = 0

        temp = divmod(index - 1, B.side_len)
        
        col = B.side_len - temp[0] - 1

        if temp[0] % 2 != 0: 
            row = temp[1]
        else: 
            row = B.side_len - temp[1] -1
        
        return (row, col)


    # Player functions 
    def from_index_to_coords(self) -> tuple: 
        # Okay so here we calculate the different coordinates based on the index
        offset_from_goal = tuple()
        x : int = 0
        y : int = 0

        starting_coordinates = (border_distance_x + tile_size/2, border_distance_y + tile_size/2)
        
        # In [0] we save how many times the number can be divided by the length of the board, in 
        # [1] we save how much remains
        offset_from_goal = self.get_row_and_col_index(self.position)

        # y-coordinate  
        y = starting_coordinates[1] + (offset_from_goal[1] * tile_size)    

        # x_coordinate
        x = starting_coordinates[0] + (offset_from_goal[0] * tile_size)

        return (x, y)


    def draw_player(self):
        coords = self.from_index_to_coords()
        draw.circle(screen, self.border_color, (coords[0], coords[1] + self.y_offset), self.radius + 1, self.width)
        draw.circle(screen, self.color, (coords[0], coords[1] + self.y_offset), self.radius)

# Text functions
    def adapt_message(self, message): 
        pass 


    def display_msg(self): 
        # ok so in this function i want the player to display a message on the prompt depending from its position on the board
        row, col = self.get_row_and_col_index(self.position)
        message = B.squares_list[col][row].message

        text_font =  font.Font('freesansbold.ttf', 15)
        text = text_font.render(message, True, colors.WHITE)
        text_rect = text.get_rect()
        text_rect.topleft = (border_distance_x - tile_size + 10, border_distance_y + 10 + B.side_len * tile_size)
        screen.blit(text, text_rect)
        
        update()

       

P1 = Player('Player_1', colors.PLAYER_1_COL, -20)  
P2 = Player('Player_2', colors.PLAYER_2_COL, 20)  
