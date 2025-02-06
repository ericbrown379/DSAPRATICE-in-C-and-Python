class Node:
    def __init__(self, element):
        self.element = element
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    
    def length(self) -> int:
        return self.size
    
    def isEmpty(self) -> bool:
        return self.size == 0
    
    def addLast(self, element:int):
        newest = Node(element)
        if(self.isEmpty()):
            self.head = newest
        else:
            self.tail.next = newest
        self.tail = newest
        self.size += 1

    def addFirst(self, element:int):
        newest = Node(element)
        if(self.isEmpty()):
            self.head = newest
            self.tail = newest
        else:
            newest.next = self.head
            self.head = newest
        self.size += 1

    def addAny (self,element:int, position:int):
        if (position <= 0 or position > self.size):
            print("Invalid Position")

        ## Create a new node
        newest = Node(element)
        p = self.head
        i = 1
        while(i < position - 1):
            p = p.next
            i = i + 1
        newest.next = p.next
        p.next = newest
        self.size += 1

    def removeFirst(self):
        if (self.isEmpty()):
            print("List is empty")
            return 
        
        e = self.head
        
         

        
    #         public void addAny(int e, int position)
    # {
    #     if (position <= 0 || position > size)
    #     {
    #         Console.WriteLine("Invalid Position");
    #         return;
    #     }

    #     Node newest = new Node(e, null);
    #     Node  p = head;
    #     int i = 1;
    #     while (i < position - 1)
    #     {
    #         p = p.next;
    #         i = i + 1;
    #     }
    #     newest.next = p.next;
    #     p.next = newest;
    #     size = size + 1;

    # }

    def display(self):
        p = self.head
        while p is not None:
            print(f"{p.element} --> ", end="")
            p = p.next
        print("None")

if __name__ == "__main__":
    l = LinkedList()
    l.addLast(7)
    l.addLast(4)
    l.addLast(12)
    l.addLast(8)
    l.addLast(3)
    l.display()
    print(f"Size: {l.length()}")
    l.addAny(20,3)
    l.display()
    print(f"Size: {l.length()}")




