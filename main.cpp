#include <iostream>
#include "stackArray.h"
#include "stackLinked.h"
#include "queueArray.h"


// Main function to test the stack implementation
int main() {
    // stackArray s(10);
    // // Push elements onto the stack
    // s.push(5);
    // s.push(3);
    // // Display stack elements
    // s.display();
    // std::cout << "Size: " << s.len();
    // std::cout << "Element Popped" << s.pop();
    // std::cout << "IsEmpty: " << s.isEmpty();
    // std::cout << "Element Popped:" << s.pop();
    // std::cout << "IsEmpty " << s.isEmpty();
    queueArray q(10);
    q.enqueue(5);
    q.enqueue(3);
    q.display();
    std::cout << "Size: " << q.length() << std::endl;
}
