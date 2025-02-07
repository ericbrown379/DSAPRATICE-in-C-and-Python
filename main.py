from stackArray import stackArray
from queueArray import QueueArray

def main():
    q = QueueArray(10)
    q.enqueue(5)
    q.enqueue(3)
    q.display()
    print("Size", q.length)

if __name__ == "__main__":
    main()



