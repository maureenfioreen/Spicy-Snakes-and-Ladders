import colors
import pygame
import mr305
import threading

from players import Player
from board import draw_board
from dice import render_dice


P1 = Player('Player_1', colors.PLAYER_1_COL, -20)  
P2 = Player('Player_2', colors.PLAYER_2_COL, 20)  

def init_game() -> None: 
    pygame.init()
    clock = pygame.time.Clock()
    clock.tick(60)
    pygame.display.set_caption("Pimp'd up snakes & ladders")


def render():  
    # Here the program iterates through a list of various events in order to react to them
    while mr305.game_in_progress:
        for event in pygame.event.get(): 
            if event.type == pygame.QUIT: 
                mr305.game_in_progress = False 
            
            elif event.type == pygame.VIDEORESIZE:
                old_surface_saved = mr305.screen
                mr305.screen = pygame.display.set_mode((event.w, event.h), pygame.RESIZABLE)
                # On the next line, if only part of the window
                # needs to be copied, there's some other options.
                mr305.screen.blit(old_surface_saved, (0,0))
                del old_surface_saved

            # Events with keys
            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_ESCAPE:
                    mr305.game_in_progress = False


        draw_board()
        P1.draw_player()
        P2.draw_player()
        render_dice(mr305.dice_player_2_coords, 4)
        pygame.display.update()


def test_events(): 
    while mr305.game_in_progress:
        P1.move_player_to_position(15)
        P2.move_player_to_position(47)


def main(): 
    init_game()

    # Threading part 
    rendering_thread = threading.Thread(target=render, daemon=True)
    test_thread = threading.Thread(target=test_events)

     
    # There could be a thread which is always performing the rendering of the game 
    # and another one performing all of the other actions

    # --> This way the input is always checked for and the functions get spread more evenly 
    
    rendering_thread.start()
    test_thread.start()

    if not mr305.game_in_progress: 
        rendering_thread.join()
        test_thread.join()
        
        pygame.quit()



# Drawing the game 
if __name__ == '__main__':
   main()