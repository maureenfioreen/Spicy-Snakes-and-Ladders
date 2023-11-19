import colors
from mr305 import tile_size, border_distance_x, border_distance_y, screen
from board import B

from pygame import draw


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

    
    def __repr__(self):
        return self.id
    
    # Player functions 
    def from_index_to_coords(self) -> tuple: 
        # Okay so here we calculate the different coordinates based on the index
        offset_from_goal = tuple()
        x : int = 0
        y : int = 0

        starting_coordinates = (border_distance_x + tile_size/2, border_distance_y + tile_size/2)
        
        # In [0] we save how many times the number can be divided by the length of the board, in 
        # [1] we save how much remains
        offset_from_goal = divmod(self.position - 1, B.side_len)

        # y-coordinate  
        y = starting_coordinates[1] + ((B.side_len - offset_from_goal[0] - 1) * tile_size)    

        # x_coordinate
        if offset_from_goal[0] % 2 != 0: 
            x = starting_coordinates[0] + ((offset_from_goal[1]) * tile_size)
        else: 
            x= starting_coordinates[0] + ((B.side_len - offset_from_goal[1] - 1) * tile_size)


        return (x, y)
        

    def draw_player(self):
        coords = self.from_index_to_coords()
        draw.circle(screen, self.border_color, (coords[0], coords[1] + self.y_offset), self.radius + 1, self.width)
        draw.circle(screen, self.color, (coords[0], coords[1] + self.y_offset), self.radius)
       

P1 = Player('Position_22', colors.PLAYER_1_COL, -20)  
P2 = Player('Position_14', colors.PLAYER_2_COL, 20)  
