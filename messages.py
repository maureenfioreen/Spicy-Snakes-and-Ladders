# Here is everything relating to messages 
from pygame import draw, Rect, font 
from colors import WHITE, BG_COLOR
from mr305 import border_distance_x, border_distance_y, tile_size, screen, side_length

def draw_message_prompt(): 
    msg_prompt = Rect(border_distance_x - tile_size, border_distance_y + side_length * tile_size,  tile_size * (side_length + 2), tile_size * 1.5)
    draw.rect(screen, BG_COLOR, msg_prompt)
    draw.rect(screen, WHITE, msg_prompt, 2, border_radius=1) 


class MessageDisplayer(): 
    def __init__(self, message = ''): 
        self.message = message


    def print_message(self, message): 
        self.message = message
        
        #with coord_mutex:
        text_font =  font.Font(None, 24)
        text = text_font.render(self.message, True, WHITE)
        text_rect = text.get_rect()
        text_rect.topleft = (border_distance_x - tile_size + 10, border_distance_y + 10 + side_length * tile_size)
        screen.blit(text, text_rect)


        
    
    
        

