import colors
from mr305 import tile_size, border_distance_x, border_distance_y, screen, side_length
from board import B
from dice import render_dice

from pygame import draw
from time import sleep 


class Player():
    def __init__(self, id : str, color : tuple,  y_offset : int, dice_render_coords : tuple, position : int = 1):
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

        # This is in order to render the dice dynamically
        self.dice_render_coords = dice_render_coords
    
    def __repr__(self):
        return self.id
    

    def get_row_and_col_index(self, index):
        row : int = 0
        col : int = 0

        temp = divmod(index - 1, side_length)
        
        col = side_length - temp[0] - 1

        if temp[0] % 2 != 0: 
            row = temp[1]
        else: 
            row = side_length - temp[1] -1
        
        return (row, col)


    # Player functions 
    def from_index_to_coords(self) -> tuple: 
        # Okay so here we calculate the different coordinates based on the index
        offset_from_goal = tuple()
        x : int = 0
        y : int = 0

        starting_coordinates = (border_distance_x + tile_size/2, border_distance_y + tile_size/2)
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


# Movement
    def move_player_by_single_square(self, new_position):
        if self.position < new_position: 
            self.position += 1

        elif self.position > new_position: 
            self.position -= 1

        else:
            pass

        sleep(0.15)


    def move_player_to_position(self, increment): 
        self.is_moving = True
        final_position = increment + self.position
        f_row, f_col = self.get_row_and_col_index(final_position)


        while self.is_moving: 
            self.move_player_by_single_square(final_position)
            
            if self.position == final_position or self.position == 1 or self.position == side_length**2:
                self.is_moving = False
                
                sleep(2)
                return B.squares_list[f_col][f_row].perform_action(self)
            
            self.draw_player()
            render_dice(self.dice_render_coords, increment)
        
    
