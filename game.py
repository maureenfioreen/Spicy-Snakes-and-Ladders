'''
    TODO:
    - implement prompts
    - draw ladders and snakes 
    - impplement special events, of which there are two: 
        + timeout event 
        + wait-one-turn event
    - dice mechanism

'''
import colors
import board 
import players
import pygame

# Everything inherent to the working plane
CANVAS_X = 960
CANVAS_Y = 720
screen = pygame.display.set_mode((CANVAS_X, CANVAS_Y), pygame.RESIZABLE)

# Variables 
game_in_progress = True 

# Template measurements
tile_size = screen.get_height() / 10
border_distance_x : int = (screen.get_width() / 2) - (tile_size * board.B.side_len / 2)
border_distance_y : int = screen.get_height() / 30


# Functions
def init_game() -> None: 
    pygame.init()
    clock = pygame.time.Clock()
    clock.tick(60)
    pygame.display.set_caption("Pimp'd up snakes & ladders")


def draw_board() -> None: 
    screen.fill(colors.BG_COLOR)

    # Here we take the list we compiled in board.py and draw the single tiles 
    # with a number in the middle for each element
    offset_x = 0
    offset_y = 0
    tile_color = tuple()

    for row in board.B.squares_list: 
        for element in row:          
            if element.index == 1 or element.index == board.B.side_len**2: tile_color = colors.YELLOWISH
            else: tile_color = element.color      
            
            tile = pygame.Rect(border_distance_x + offset_x, border_distance_y + offset_y, tile_size, tile_size)
            text_surface_object = pygame.font.SysFont('Arial', 25).render(str(element.index), True, colors.BLACK)
            text_rect = text_surface_object.get_rect(center=tile.center)
            pygame.draw.rect(screen, tile_color, tile)
            pygame.draw.rect(screen, colors.WHITE, tile, 2, border_radius=1)
            screen.blit(text_surface_object, text_rect)
            offset_x += tile_size

        offset_x = 0
        offset_y += tile_size
    
    msg_prompt = pygame.Rect(border_distance_x - tile_size, border_distance_y + offset_y, tile_size * (board.B.side_len + 2), tile_size * 1.5)
    pygame.draw.rect(screen, colors.BG_COLOR, msg_prompt)
    pygame.draw.rect(screen, colors.WHITE, msg_prompt, 2, border_radius=1)


# Player functions 
def from_index_to_coords(index : int) -> tuple: 
    # Okay so here we calculate the different coordinates based on the index
    offset_from_goal = tuple()
    x : int = 0
    y : int = 0

    starting_coordinates = (border_distance_x + tile_size/2, border_distance_y + tile_size/2)
    
    # In [0] we save how many times the number can be divided by the length of the board, in 
    # [1] we save how much remains
    offset_from_goal = divmod(index - 1, board.B.side_len)

    # y-coordinate  
    y = starting_coordinates[1] + ((board.B.side_len - offset_from_goal[0] - 1) * tile_size)    

    # x_coordinate
    if offset_from_goal[0] % 2 != 0: 
        x = starting_coordinates[0] + ((offset_from_goal[1]) * tile_size)
    else: 
        x= starting_coordinates[0] + ((board.B.side_len - offset_from_goal[1] - 1) * tile_size)


    return (x, y)
    

def draw_player(player) -> pygame.Rect:
    coords = from_index_to_coords(player.position)
    pygame.draw.circle(screen, player.color, (coords[0], coords[1] + player.y_offset), player.radius)


# Drawing the game 
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

        # Render the board 
        draw_board()
        draw_player(players.P1)
        draw_player(players.P2)
        pygame.display.update()

    pygame.quit()