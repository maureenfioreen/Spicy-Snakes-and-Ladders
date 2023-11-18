from pygame import display, RESIZABLE
from board import B

# Everything inherent to the working plane
CANVAS_X = 960
CANVAS_Y = 720

# Variables 
game_in_progress = True 
screen = display.set_mode((CANVAS_X, CANVAS_Y), RESIZABLE)

# Template measurements
tile_size = screen.get_height() / 10
border_distance_x : int = (screen.get_width() / 2) - (tile_size * B.side_len / 2)
border_distance_y : int = screen.get_height() / 30