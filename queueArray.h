#include <iostream>
#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

class queueArray{
public:
    int* data;
    int front, rear, size, capacity;

public:
    queueArray(int cap){
        capacity = cap;
        data = new int[capacity];
        front = 0;
        rear = 0;
        size = 0;
    }

//Deconstructor
    ~queueArray(){
        delete[] data; //Free the allocated memory
    }

public:
    int length(){
        return size;
    }

public:
    bool isEmpty(){
        return size == 0;
    }

public:
    bool isFull(){
        return size == capacity;
    }

public:
    void enqueue(int e){
        if (isFull()){
            std::cout << "Queue is Full\n";
            return;
        } else{
            data[rear] = e;
            rear ++;
            size ++;

        }
    }

public:
    int dequeue() {
        if (isEmpty()){
            std::cout << "Queue is empty";
            return -1;
        }
        else{
            int e = data[front];
            front ++;
            size --;
            return e;
        }
    }

public:
    void display(){
        if (isEmpty()){
            std::cout << "Queue is Empty";
            return;
        }
        for(int i = front; i < rear ; i++){
            std::cout << data[i] << "-->";
        }
        std::cout << "NULL\n";

    }




};




#endif