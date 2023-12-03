from os import path
from pygame.image import load
from pygame.transform import scale
from pygame import Rect
from pygame.draw import rect

from mr305 import screen
from colors import BG_COLOR


class Dice(): 
    def __init__(self, coords : tuple):
        self.coords = coords 
        self.index = 0
        self.dice_size = 100
        self.dice_coverup = Rect(self.coords[0], self.coords[1], self.dice_size, self.dice_size)
        self.dice_active = False


    def render_dice(self, given_index : int = 0):
        self.dice_active = True
        self.index = given_index
        
        while self.dice_active: 
            if self.index < 0: 
                raise Exception("NEGATIVE DICE INDEX!!!!")

            elif self.index == 0: 
                self.dice_active = False
                
            else: 
                dice_image = load(path.join('./Dice_Faces', '{}.png'.format(self.index)))
                screen.blit(scale(dice_image, (self.dice_size, self.dice_size)), self.coords)
                return 
            


        
        rect(screen, BG_COLOR, self.dice_coverup)
    
     
