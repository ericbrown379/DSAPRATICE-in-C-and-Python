#include <iostream>

class stackArray {
private:
    int *data;
    int capacity; // Maximum size of the stack
    int top; // Index of the top element

public:
    // Constructor
    stackArray(int n) {
        capacity = n;
        data = new int[capacity];
        top = 0; // Stack is empty initially
    }

    // Destructor to prevent memory leaks
    ~stackArray() {
        delete[] data;
    }

    // Get the current size of the stack
    int len() {
        return top;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == 0;
    }

    // Check if the stack is full
    bool isFull() {
        return top == capacity;
    }

    // Push an element onto the stack
    void push(int e) {
        if (isFull()) {
            std::cout << "Stack is full! Overflow.\n";
            return;
        }
        data[top] = e;
        top++; // Increment top
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is Empty! Underflow.\n";
            return -1; // Return an error value
        }
        top--; // Move top down
        return data[top]; // Return last stored element
    }

    // Get the top element without removing it
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is Empty!\n";
            return -1; // Return an error value
        }
        return data[top - 1]; // Return the last element
    }

    // Display all elements in the stack
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty!\n";
            return;
        }
        for (int i = 0; i < top; i++) {
            std::cout << data[i] << "--";
        }
        std::cout << "NULL\n"; // End marker for clarity
    }
};

// Main function to test the stack implementation
int main() {
    stackArray s(10); // Create a stack with size 10

    // Push elements onto the stack
    s.push(5);
    s.push(3);
    
    // Display stack elements
    s.display();

    // Check size
    std::cout << "Size: " << s.len() << std::endl;

    // Pop an element
    std::cout << "Popped: " << s.pop() << std::endl;

    // Display again after popping
    s.display();

    return 0;
}
