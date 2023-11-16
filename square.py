import colors

class Square: 
    def __init__(self, index : int): 
        self.index = index
        self.message : str = 'This is the superclass'

    def __repr__(self): 
        return self.index


class Normal_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = 0
        self.message : str = 'This is just a normal square' 

        if self.index % 2 == 0: self.color = colors.TILE_1_COLOR
        elif self.index %2 != 0: self.color = colors.TILE_2_COLOR



class Ladder_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = 4
        self.message = f'You might advance {self.increment} squares for free, as a treat :3'
        self.color = colors.LADDER_SQUARE_COL
    

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


if __name__ == '__main__':
    NS = Normal_Square(20)
    LS = Ladder_Square(40)
    SQ = Snake_Square(60)


    