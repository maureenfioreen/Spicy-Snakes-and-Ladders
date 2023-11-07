# In this file we do the game board for snakes and ladders

# Imports
import pygame
import square

# Init pygame as the very first action 
pygame.init()

# Constants 
CANVAS_X = 960
CANVAS_Y = 720

# Colors
ORANGE  = ( 255, 140, 0)
RED  = ( 255, 0, 0)
GREEN   = ( 0, 255, 0)
BLACK = ( 0, 0, 0)
WHITE  = ( 255, 255, 255)

class Board: 
    def __init__(self): 
        self.side_len : int = 7
        self.squares_list =  [[] for _ in range(self.side_len)]      

        # Time to add the squares to the board
        
        row_cnt = 0

        for row in self.squares_list: 
            iter_cnt = 0
            if row_cnt % 2 == 0: 
                for _ in range(self.side_len):
                    row.append(square.Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt, BLACK))
                    iter_cnt += 1
                
            elif row_cnt % 2 == 1: 
                iter_cnt_rev = self.side_len - 1
                for _ in range(self.side_len):
                    row.append(square.Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev, RED))
                    iter_cnt_rev -= 1
                
            row_cnt += 1
    
    def __repr__(self):
        result : str = ''
        for row in self.squares_list:
            result += '| '
            for element in row: 
                result += str(element.index) + '| '
            result += '\n'
        return result
        

B = Board()
print(B)
    


        

