# In this file we program the initi sequence for the board

# Imports
import square


class Board: 
    def __init__(self): 
        self.side_len : int = 7
        self.squares_list =  [[] for _ in range(self.side_len)]      

        # Time to add the squares to the board
        
        row_cnt = 0

        for row in self.squares_list: 
            iter_cnt = 0
            if row_cnt % 2 == 0: 
                for _ in range(self.side_len):
                    row.append(square.Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt, (255, 0, 0)))
                    iter_cnt += 1
                
            elif row_cnt % 2 == 1: 
                iter_cnt_rev = self.side_len - 1
                for _ in range(self.side_len):
                    row.append(square.Square((self.side_len**2) - (row_cnt * self.side_len) - iter_cnt_rev, (0, 255, 0)))
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


        

