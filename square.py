import colors
from pygame import event, KEYDOWN, K_RIGHT, K_LEFT
import time
from random import randint
from messages import print_message
from mr305 import set_game_state


class Square: 
    def __init__(self, index : int): 
        self.index = index
        self.name = 'Square Superclass'
        self.message = ''
        self.increment = 0

    def __repr__(self): 
        return type(self)
    
    def perform_action(self, player):
        print(f'\nPerforming the action of {self.name}. Moving {player.id} by {self.increment} tiles')
        # There is a logical fallancy: the methods call themselves to infinity -> FIX!!!!!!
        player.is_moving = True
        final_position = player.position + self.increment
        print_message(self.message)

        while player.is_moving: 
            player.move_player_by_single_square(final_position)
            
            if player.position == final_position:
                player.is_moving = False
                print(f'\nAction performed. Moved {player.id} by {self.increment} tiles')
                
            player.draw_player()


class Normal_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = 0
        self.name = 'Normal Square'
        self.message = 'This is just a normal square' 

        if self.index % 2 == 0: self.color = colors.TILE_1_COLOR
        elif self.index %2 != 0: self.color = colors.TILE_2_COLOR


    def perform_action(self, player):
        return super().perform_action(player)


class Ladder_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = 4
        self.name = 'Ladder Square'
        self.message = f'You might advance {self.increment} \nsquares for free, as a treat :3'
        self.color = colors.LADDER_SQUARE_COL
    
    def perform_action(self, player):
        return super().perform_action(player)


class Snake_Square(Square): 
    def __init__(self, index):
        super().__init__(index)
        self.increment = -6
        self.name = 'Snake Square'
        self.message = f'You just have been punished \nto back up {self.increment} squares, you fool'
        self.color = colors.SNAKE_SQUARE_COL

    def perform_action(self, player):
        return super().perform_action(player)
    

class Winning_Square(Square):
    def __init__(self, index): 
        super().__init__(index)
        self.name = 'Winning Square'
        self.message = 'YOU WON THE GAME!!! CONGRATS :D'
        self.color = colors.MOD_GREEN

    def perform_action(self, player): 
        winning_message = player.id + self.message

        # print winning message 
        print_message(winning_message)
        # Why the fuck are you not accessed?
        set_game_state(False) 
        


class Waiting_Square(Square): 
    def __init__(self, index):
        super.__init__(index)
        self.message = 'You will have to wait a turn :/'
        self.color = colors.DARK_RED


class Gambling_Square(Square): 
    def __init__(self, index): 
        super().__init__(index)
        self.name = 'Gambling Square'
        self.time_for_decision = 5
        self.punishment = -7
        self.safe_route_increment = 3
        self.message = f'Would you like to gamble for \n a better chance at advancing \nor take the safe route?'
        self.color = colors.DARK_BLUE
    

    def gamble(self, player): 
        # send the input for a random number 
        # for now tho, use a number you randomize yourself
        gamble_number = randint(1, 6)

        if gamble_number >= 5: 
            player.move_player_to_position(player.position + gamble_number)

        else: 
            player.move_player_to_position(player.position + self.punishment)


    def perform_action(self, player): 
        temp_time = self.time_for_decision
        while temp_time > 0:
            second_text = f'Press left to gamble and press right for the safe route. \nYou have {temp_time} seconds to decide'
            print_message(second_text)
            # here print the text

            # check for user input 
            for action in event.get():
                if action.type == KEYDOWN: 
                    if action.type == K_LEFT: 
                        self.gamble(player)

                elif action.type == K_RIGHT or temp_time == 0: 
                    player.move_player_to_position(player.position + self.safe_route_increment)

            time.sleep(1)
            temp_time -= 1
                




    