



class QueueArray:
    def __init__(self, capacity):
        self.capacity = capacity
        self.data = [None] * capacity
        self.front = 0
        self.rear = 0
        self.size = 0

    def length(self):
        return self.size
    
    def is_empty(self):
        return self.size == 0
    
    def is_full(self):
        return self.size == self.capacity
    
    def enqueue(self, e):
        """Insert element into the queue"""
        if (self.is_full()):
            print("Queue is Full")
            return
        else:
            self.data[self.rear] = e
            self.rear += 1
            self.size += 1

    def dequeue(self):
        if (self.is_empty()):
            print("Queue is empty")
            return None
        else:
            e = self.data[self.front]
            self.front += 1
            self.size -= 1
            return e
    
    def display(self):
        if (self.is_empty()):
            print("Queue is empty")
            return 
        else:
            print("Queue:", end= " ")
            i = self.front
            for _ in range(self.size):
                print(self.data[i], end=" --> ")
                i = (i + 1) % self.capacity
            print ("NULL")
