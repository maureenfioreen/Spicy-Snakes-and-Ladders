'''
    TODO:
    - implement prompts
    - draw ladders and snakes 
    - implement special events, of which there are two: 
        + timeout event 
        + wait-one-turn event
    - dice mechanism

'''
import colors
import board 
import pygame
import mr305
from players import P1, P2
from time import sleep 


# Functions
def init_game() -> None: 
    pygame.init()
    clock = pygame.time.Clock()
    clock.tick(60)
    pygame.display.set_caption("Pimp'd up snakes & ladders")


def draw_board() -> None: 
    mr305.screen.fill(colors.BG_COLOR)

    # Here we take the list we compiled in board.py and draw the single tiles 
    # with a number in the middle for each element
    offset_x = 0
    offset_y = 0
    tile_color = tuple()

    for row in board.B.squares_list: 
        for element in row:          
            if element.index == 1 or element.index == board.B.side_len**2: tile_color = colors.YELLOWISH
            else: tile_color = element.color      
            
            tile = pygame.Rect(mr305.border_distance_x + offset_x, mr305.border_distance_y + offset_y, mr305.tile_size, mr305.tile_size)
            text_surface_object = pygame.font.SysFont('Arial', 25).render(str(element.index), True, colors.BLACK)
            text_rect = text_surface_object.get_rect(center=tile.center)
            pygame.draw.rect(mr305.screen, tile_color, tile)
            pygame.draw.rect(mr305.screen, colors.WHITE, tile, 2, border_radius=1)
            mr305.screen.blit(text_surface_object, text_rect)
            offset_x += mr305.tile_size

        offset_x = 0
        offset_y += mr305.tile_size
    
    msg_prompt = pygame.Rect(mr305.border_distance_x - mr305.tile_size, mr305.border_distance_y + offset_y, mr305.tile_size * (board.B.side_len + 2), mr305.tile_size * 1.5)
    pygame.draw.rect(mr305.screen, colors.BG_COLOR, msg_prompt)
    pygame.draw.rect(mr305.screen, colors.WHITE, msg_prompt, 2, border_radius=1)


def move_player(player, new_position): 
    if player.position < new_position: 
        player.position += 1

    elif player.position > new_position: 
        player.position -= 1
    
    player.draw_player()
    draw_board()
    sleep(0.3)

def render():  
    # Here the program iterates through a list of various events in order to react to them
    for event in pygame.event.get(): 
        if event.type == pygame.QUIT: 
            mr305.game_in_progress = False 
        
        if event.type == pygame.VIDEORESIZE:
            old_surface_saved = mr305.screen
            mr305.screen = pygame.display.set_mode((event.w, event.h), pygame.RESIZABLE)
            # On the next line, if only part of the window
            # needs to be copied, there's some other options.
            mr305.screen.blit(old_surface_saved, (0,0))
            del old_surface_saved

        # Events with keys
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                mr305.game_in_progress = False

    # Render the board 
    draw_board()
    P1.draw_player()
    P2.draw_player()
    pygame.display.update()


# Drawing the game 
if __name__ == '__main__':
    init_game()
    while mr305.game_in_progress: 
        render()
        move_player(P1, 24)
        move_player(P2, 15)
    
        
    pygame.quit()