import colors

class Player():
    def __init__(self, id : str, color : tuple,  y_offset : int, position : int = 1):
        self.id = id
        # For the drawing part
        self.y_offset = y_offset
        self.position = position
        self.color = color
        self.radius = 10

        # This is fo the animation
        self.moving_direction = -1
    
    def __repr__(self):
        return self.id
    
P1 = Player('Position_22', colors.PLAYER_1_COL, -20)  
P2 = Player('Position_14', colors.PLAYER_2_COL, 20)  
