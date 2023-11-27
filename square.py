import colors

class Square: 
    def __init__(self, index : int): 
        self.index = index
        self.message = ''

    def __repr__(self): 
        return type(self)
    
    def perform_action(self):
        pass


class Normal_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = 0
        self.message = 'This is just a normal square' 

        if self.index % 2 == 0: self.color = colors.TILE_1_COLOR
        elif self.index %2 != 0: self.color = colors.TILE_2_COLOR


class Ladder_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = 4
        self.message = f'You might advance {self.increment} squares for free, as a treat :3'
        self.color = colors.LADDER_SQUARE_COL

    def perform_action(self, player):
        pass 

    # Need to move the player, but the method for moving the player is in the game.py module 
    # --> CAN I SHIFT IT TO players.py
    

class Snake_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = -6
        self.message = f'You just have peen punished to back up {self.increment} squares, you  fool'
        self.color = colors.SNAKE_SQUARE_COL


class Winning_Square(Square):
    def __init__(self, index): 
        super().__init__(index)
        self.message = 'YOU WON THE GAME!!! CONGRATS :D'
        self.color = colors.YELLOWISH


class Waiting_Square(Square): 
    def __init__(self, index):
        super.__init__(index)
        self.message = 'You will have to wait a turn :/'
        self.color = colors.DARK_RED


class Gambling_Square(Square): 
    def __init__(self, index): 
        super().__init__(index)
        self.time_for_decision = 3
        self.punishment = 7
        self.message = f'Would you like to gamble for a better chance at advancing or take the safe route?'
        self.color = colors.DARK_BLUE
    
    def gamble(): 
        pass 


    