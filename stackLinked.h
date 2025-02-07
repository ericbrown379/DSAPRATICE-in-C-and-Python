#include <iostream>
#include "node.h"
#ifndef STACKEDLINKED_H
#define STACKEDLINKED_H

class StackLinked{
    Node* top;
    int count;

    public:
    StackLinked() : top(nullptr), count(0) {}

    ~StackLinked() { // Deconstructor to prevent memory leaks
        while (!isEmpty()) {
            pop();
        }
    }

    public:
    int length(){
        return count;
    }

    public:
    bool isEmpty(){
        return count == 0;

    }

    public:
    void push(int e){
        Node* newest = new Node(e, nullptr);
        if(isEmpty()){
            top = newest;
        }
        else{
            newest->next = top;
            top = newest;
        }
        count ++;
    }

    public:
    int pop(){
        if (isEmpty()){
            std::cout << "Stack is empty\n";
            return -1;
        } else{
            int e = top->element;
            top = top->next;
            count --;
            return e;
        }
    }

    public:
    int peek(){
        if (isEmpty()){
            std::cout << "stack is Empty.\n";
            return -1;
        }
        return top->element;
    }

    public:
    void display(){
        Node* p = top;
        while(p != nullptr){
            std::cout << std::to_string(p->element) + "-->";
            p = p->next;
        }
        std::cout << "NULL\n";
    }

};


#endif