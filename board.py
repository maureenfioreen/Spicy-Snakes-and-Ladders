# In this file we program the initi sequence for the board

# Imports
import square

# Adding this template to match Fatmiah's example, will cange it later
board_reference = [[0,0,0,0,1,0,0],
                   [0,0,0,0,0,0,0],
                   [0,-1,0,0,0,0,0],
                   [0,0,0,0,0,-1,0],
                   [0,0,0,1,0,0,0],
                   [0,0,0,0,0,1,0],
                   [0,-1,0,0,0,0,0]]


class Board: 
    def __init__(self): 
        self.side_len : int = 7
        self.squares_list =  [[] for _ in range(self.side_len)]      

        # Time to add the squares to the board
        
        row_cnt = 0

        for row in self.squares_list: 
            iter_cnt = 0
            if row_cnt % 2 == 0: 
                for i in range(0, self.side_len):
                    # These lines of code provide the matching to Fatimah's template
                    if board_reference[row_cnt][i] < 0:
                        row.append(square.Snake_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))
                    
                    elif board_reference[row_cnt][i] > 0: 
                        row.append(square.Ladder_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))                       

                    else: 
                        row.append(square.Normal_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt))

                    iter_cnt += 1
                
            elif row_cnt % 2 == 1: 
                iter_cnt_rev = self.side_len - 1
                for j in range(self.side_len):
                    if board_reference[row_cnt][j] < 0:
                        row.append(square.Snake_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                    elif board_reference[row_cnt][j] > 0: 
                        row.append(square.Snake_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                    else: 
                        row.append(square.Normal_Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev))

                    iter_cnt_rev -= 1
                
            row_cnt += 1
        
    
    def __repr__(self):
        result : str = ''
        for row in self.squares_list:
            result += '| '
            for element in row: 
                result += str(element.index) + '| '
            result += '\n'
        return result
        
# Instantiate the board object you'll be working with 
B = Board()
print(B)


        

