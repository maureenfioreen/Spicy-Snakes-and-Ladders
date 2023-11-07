import board 
import pygame

# Variables 
game_in_progress = True

# Shapes and working plane
screen = pygame.display.set_mode((board.CANVAS_X, board.CANVAS_Y), pygame.RESIZABLE)
bg_rect = pygame.Rect(board.CANVAS_X / 50, board.CANVAS_Y / 50, screen.get_width() / 1.5, screen.get_height() / 1.5)

# Functions
def init_game(): 
    clock = pygame.time.Clock()
    clock.tick(60)
    pygame.display.set_caption("Pimp'd up snakes & ladders")

def draw_board(): 
    pygame.draw.rect(screen, board.BLACK, bg_rect, 0)

if __name__ == '__main__':
    init_game()

    while game_in_progress: 
        # Here the program iterates through a list of various events in order to react to them
        for event in pygame.event.get(): 
            if event.type == pygame.QUIT: 
                game_in_progress = False 
            
            if event.type == pygame.VIDEORESIZE:
                old_surface_saved = screen
                screen = pygame.display.set_mode((event.w, event.h),
                                                pygame.RESIZABLE)
                # On the next line, if only part of the window
                # needs to be copied, there's some other options.
                screen.blit(old_surface_saved, (0,0))
                del old_surface_saved

            # Events with keys
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_ESCAPE:
                    game_in_progress = False

        screen.fill(board.WHITE)
        draw_board()
        pygame.display.flip()

    pygame.quit()