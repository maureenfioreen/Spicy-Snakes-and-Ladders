from os import path
from pygame.image import load
from pygame.transform import scale
from mr305 import screen


def render_dice(player_dice_coords : tuple, index : int = 0):
    dice_image = load(path.join('./Dice_Faces', '{}.png'.format(index)))
    screen.blit(scale(dice_image, (100, 100)), player_dice_coords)
    
     
