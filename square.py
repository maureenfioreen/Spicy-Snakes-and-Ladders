class Square: 
    def __init__(self, index, color): 
        self.index = index
        self.color = color
        self.message = 'This is a normal square for now'
    
    def __repr__(self): 
        return self.index
    