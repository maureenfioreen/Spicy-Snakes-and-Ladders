'''
    TODO:
    - implement prompts
    - draw players 
    - draw ladders and snakes 
    - impplement special events, of which there are two: 
        + timeout event 
        + wait-one-turn event
    - dice mechanism

'''

import board 
import pygame

# Everything inherent to the working plane
CANVAS_X = 960
CANVAS_Y = 720
screen = pygame.display.set_mode((CANVAS_X, CANVAS_Y), pygame.RESIZABLE)

# Variables 
game_in_progress = True 

tile_size = screen.get_height() / 10
border_distance_x : int = (screen.get_width() / 2) - (tile_size * board.B.side_len / 2)
border_distance_y : int = screen.get_height() / 30


# Colors
# Basic, you never know
ORANGE  = ( 255, 140, 0)
RED  = ( 255, 0, 0)
GREEN   = ( 0, 255, 0)
BLACK = ( 0, 0, 0)
WHITE  = ( 255, 255, 255)

# A better selection 
BG_COLOR = (40, 41, 38)
INDIGO = (133, 148, 237)
PINKISH = (242, 114, 150)
YELLOWISH = (233, 237, 171)


# Functions
def init_game(): 
    pygame.init()
    clock = pygame.time.Clock()
    clock.tick(60)
    pygame.display.set_caption("Pimp'd up snakes & ladders")


def draw_board(): 
    screen.fill(BG_COLOR)

    # Here we take the list we compiled in board.py and draw the single tiles 
    # with a number in the middle for each element
    offset_x = 0
    offset_y = 0
    tile_color = tuple()

    for row in board.B.squares_list: 
        for square in row: 
            if square.index % 2 == 0: tile_color = INDIGO
            elif square.index == 1 or square.index == board.B.side_len**2: tile_color = YELLOWISH
            else: tile_color = PINKISH

            tile = pygame.Rect(border_distance_x + offset_x, border_distance_y + offset_y, tile_size, tile_size)
            text_surface_object = pygame.font.SysFont('Arial', 25).render(str(square.index), True, BLACK)
            text_rect = text_surface_object.get_rect(center=tile.center)
            pygame.draw.rect(screen, tile_color, tile)
            pygame.draw.rect(screen, WHITE, tile, 2, border_radius=1)
            screen.blit(text_surface_object, text_rect)
            offset_x += tile_size

        offset_x = 0
        offset_y += tile_size
    
    msg_prompt = pygame.Rect(border_distance_x - tile_size, border_distance_y + offset_y, tile_size * (board.B.side_len + 2), tile_size * 1.5)
    pygame.draw.rect(screen, BG_COLOR, msg_prompt)
    pygame.draw.rect(screen, WHITE, msg_prompt, 2, border_radius=1)

    pygame.display.update()



if __name__ == '__main__':
    init_game()

    while game_in_progress: 
        # Here the program iterates through a list of various events in order to react to them
        for event in pygame.event.get(): 
            if event.type == pygame.QUIT: 
                game_in_progress = False 
            
            if event.type == pygame.VIDEORESIZE:
                old_surface_saved = screen
                screen = pygame.display.set_mode((event.w, event.h), pygame.RESIZABLE)
                # On the next line, if only part of the window
                # needs to be copied, there's some other options.
                screen.blit(old_surface_saved, (0,0))
                del old_surface_saved

            # Events with keys
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_ESCAPE:
                    game_in_progress = False

        
        draw_board()
        pygame.display.flip()

    pygame.quit()