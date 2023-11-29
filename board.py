# In this file we program the initi sequence for the board

# Imports
import square
import mr305
from colors import BG_COLOR, WHITE, BLACK, YELLOWISH
from pygame import Rect, font, draw

# Adding this template to match Fatmiah's example, will cange it later
board_reference = [[5,-1,0,0,1,0,0],
                   [0,0,0,0,0,2,0],
                   [0,-1,0,0,0,0,0],
                   [0,0,2,0,0,-1,0],
                   [0,0,1,0,0,0,0],
                   [0,0,0,0,0,-1,0],
                   [0,-1,0,0,0,0,0]]


class Board: 
    def __init__(self): 
        self.side_len : int = mr305.side_length
        self.squares_list =  [[] for _ in range(self.side_len)]      

        # Time to add the squares to the board
        
        row_cnt = 0

        for row in self.squares_list: 
            iter_cnt = 0
            if row_cnt % 2 == 0: 
                for i in range(0, self.side_len):

                    match board_reference[row_cnt][i]: 
                        case -1: 
                            row.append(square.Snake_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))
                        
                        case 0: 
                            row.append(square.Normal_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))

                        case 1: 
                            row.append(square.Ladder_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))

                        case 2: 
                            row.append(square.Gambling_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))

                        case 5: 
                            row.append(square.Winning_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))

                        case default: 
                            raise Exception("SOMETHING WENT WRONG WHILE INITIALIZING THE BOARD!!!")

                    iter_cnt += 1
                

            elif row_cnt % 2 == 1: 
                iter_cnt_rev = self.side_len - 1
                for j in range(self.side_len):
                    match board_reference[row_cnt][j]: 
                        case -1: 
                            row.append(square.Snake_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))
                        
                        case 0: 
                            row.append(square.Normal_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                        case 1: 
                            row.append(square.Ladder_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                        case 2: 
                            row.append(square.Gambling_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                        case 5: 
                            row.append(square.Winning_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                        case default: 
                            raise Exception("SOMETHING WENT WRONG WHILE INITIALIZING THE BOARD!!!")

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

        
# Instantiate the board object you'll be working with 
B = Board()

def draw_board() -> None: 
    mr305.screen.fill(BG_COLOR)

    # Here we take the list we compiled in board.py and draw the single tiles 
    # with a number in the middle for each element
    offset_x = 0
    offset_y = 0
    tile_color = tuple()

    for row in B.squares_list: 
        for element in row:          
            if element.index == 1 or element.index == B.side_len**2: tile_color = YELLOWISH
            else: tile_color = element.color      
            
            tile = Rect(mr305.border_distance_x + offset_x, mr305.border_distance_y + offset_y, mr305.tile_size, mr305.tile_size)
            text_surface_object = font.SysFont('Arial', 25).render(str(element.index), True, BLACK)
            text_rect = text_surface_object.get_rect(center=tile.center)
            draw.rect(mr305.screen, tile_color, tile)
            draw.rect(mr305.screen, WHITE, tile, 2, border_radius=1)
            mr305.screen.blit(text_surface_object, text_rect)
            offset_x += mr305.tile_size

        offset_x = 0
        offset_y += mr305.tile_size 


        

