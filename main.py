import colors
import pygame
import mr305
import threading

from random import randint

from players import Player
from board import draw_board
from messages import draw_message_prompt

'''
Problems: 
    - Choose starting player function (With ROS2 communication!)
    - Messages don't get printed long enough
    - Still no game package to exchange messages!!!
'''

P1 = Player('Player_1', colors.PLAYER_1_COL, -20, mr305.dice_player_1_coords)  
P2 = Player('Player_2', colors.PLAYER_2_COL, 20, mr305.dice_player_2_coords)  


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
        draw_message_prompt()
        P1.draw_player()
        P1.Dice.render_dice(P1.Dice.index)
        P2.draw_player()
        P2.Dice.render_dice(P2.Dice.index)
        pygame.display.update()


def test_events(): 
    while mr305.game_in_progress:
        dice_1 = randint(1, 6)
        dice_2 = randint(1, 6)
        P1.move_player_to_position(dice_1)
        P2.move_player_to_position(dice_2)


def main(): 
    init_game()

    # Threading part 
    rendering_thread = threading.Thread(target=render)
    test_thread = threading.Thread(target=test_events, daemon=True)
    
    rendering_thread.start()
    test_thread.start()

    if not mr305.game_in_progress: 
        rendering_thread.join()
        test_thread.join()
        
        pygame.quit()



# Drawing the game 
if __name__ == '__main__':
   main()