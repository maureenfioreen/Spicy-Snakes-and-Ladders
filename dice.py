from os import path
from pygame.image import load
from pygame.transform import scale
from pygame.display import update
from mr305 import screen


def render_dice(index : int = 0):
    dice_image = load(path.join('./Dice_Faces', '{}.png'.format(index)))
    screen.blit(scale(dice_image, (100, 100)), (10, 10))
    update()