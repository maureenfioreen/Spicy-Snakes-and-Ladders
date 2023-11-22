from pygame import display, Rect, RESIZABLE
from board import B

# haha get it since it's full of globally used stuff
# global kinda means woldwide like pitbull, mr.305
# dale papichulo

# Everything inherent to the working plane
CANVAS_X = 960
CANVAS_Y = 720

# Variables 
game_in_progress = True 
screen = display.set_mode((CANVAS_X, CANVAS_Y), RESIZABLE)
global msg_prompt 

# Template measurements
tile_size = screen.get_height() / 10
border_distance_x : int = (screen.get_width() / 2) - (tile_size * B.side_len / 2)
border_distance_y : int = screen.get_height() / 30

# Coordinates to render the dice 
dice_player_1_coords =  (50, 10)
dice_player_2_coords = (CANVAS_X - 150, 10)