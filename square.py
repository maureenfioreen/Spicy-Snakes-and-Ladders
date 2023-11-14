class Square: 
    def __init__(self, index : int, color : tuple): 
        self.index = index
        self.color = color
        self.message : str = 'This is a normal square for now'
    
    def __repr__(self): 
        return self.index
    