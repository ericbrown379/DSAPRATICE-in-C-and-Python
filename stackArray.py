class stackArray:
    def __init__(self, capacity):
        self.capacity = capacity
        self.data = []

    def is_empty(self):
        return len(self.data) == 0
    
    def is_full(self):
        return len(self.data) == self.capacity
    
    def push(self,e):
        if (self.is_full()):
            print("Stack is Full! Underflow")
            return
        else:
            self.data.append(e)

    def pop(self):
        if(self.is_empty()):
            print("Stack is empty/Undeflow")
            return None
        else:
            return self.data.pop()
        
    def peek(self):
        if(self.is_empty()):
            print("Stack is Empty/ UnderFlow")
            return None
        else:
            return self.data[-1]
        
    
    def size(self):
        return len(self.data)
    

    def display(self):
        if (self.is_empty()):
            print("Stack is Empty/Undeflow")
            return None
        else:
            print(" -> ".join(map(str, self.data)) + "-> NULL")