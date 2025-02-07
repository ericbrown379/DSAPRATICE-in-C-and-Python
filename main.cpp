#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stackArray.h"
#include "stackLinked.h"
#include "queueArray.h"
// how to declare
//How to intialize
//How to access
// What is padding
// What is a struct

using namespace std;

//in a struct ever everything by default is public
// in a class everything by default is private
class Rectangle {
public:
int length; // 4 bytes
int breadth; // 4 bytes
// char x; // Instead of takining 1 byte it will extra memory for padding makes it easier for our machine to read, later on it will discard it
//Total 8 bytes

void initialize(int l, int b){
    length = l;
    breadth = b;
}

int area(){
    return length * breadth;
}

int perimeter(){
    return 2*(length + breadth);
}
};
// } r1,r2,r3; // Global varaible

// struct Recatngle r1, r2, r3;
// //Declaring outside the main function
// struct Rectangle r1;
//function pratice
// int add(int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }

// int add(int a, int b){

//     return a + b;
// }

// Main function to test the stack implementation
int main() 
{

    Rectangle r;

    int l,b;
    printf("Enter Length and Breadth: ");
    cin>>l>>b;
    r.initialize(l, b);
    int a = r.area();
    int peri = r.perimeter();
    printf("Area = %d\nPerimeter = %d\n", a, peri);
    // pointer to structure
    // Rectangle r = {10,5}; // In C++ you don't have to use struct keyword
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;

    // //Pointer
    // Rectangle *p = &r;

    // Create a object in heap
    // Rectangle *p;
    // // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); // the C way
    // p = new Rectangle;
    // p->length = 15;
    // p->breadth = 7;
    // cout<<p->length<<endl;
    // cout<<p->breadth<<endl;

    // struct Rectangle r = {10,5} // In C you have to use struct keyword



// reference
    // int a = 25;
    // int &r = a;
    // int b = 25;
    // r = b; // a will be 25 these  is a assignment

    // cout<<a<<endl<<r<<endl;


    //pointer
    // Every pointer is 8 bytes
    // int *p1;
    // char *p2;
    // float *p3;
    // double *p4;
    // struct Rectangle *p5;
    // cout << sizeof(p1) << endl;
    // cout << sizeof(p2) << endl;
    // cout << sizeof(p3) << endl;
    // cout << sizeof(p4) << endl;
    // cout << sizeof(p5) << endl;
    // int A[5] = {2,4,6,8,10}; //Created inside the stack frame
    // int *p;
    // // p=&A[0];
    // // OR
    // p=A;

    // pinter created in heap
    // int *p;
    // // p = (int *)malloc(5*sizeof(int)); // In the heap C way
    // p = new int[5]; // In the heap C++ way
    
    // p[0] =10; p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 31;


    // for(int i = 0; i < 5; i++){
    //     cout<<p[i]<<endl;
    // }

    // delete [] p; // in C++ way
    // free(p); // in C way

    // int a = 10;
    // int *p;
    // p=&a;
    // cout<<a<<endl;
    // printf("using pointer %d %d", *p); // For value of a
    // printf("using pointer %d %d", p, &a); // address of a 



    // struct Rectangle r1 = {10,5};
    // r1.length = 15;
    // r1.breadth = 7;
    // cout<<r1.length<<endl;
    // cout<<r1.breadth<<endl;
    // cout << sizeof(r1) << endl;
    // printf("%d", sizeof(r1));


    // int n;
    // cout<<"Enter Size: ";
    // cin>>n;
    // // variable size arrays cannot be initialized in C++
    // int A[n];

    // You can skip the size of the array when you initialize it
    // int A[10] = {2,4,6,8,10, 12};
    // If you intialize it tp a certian size and not all the elements, the rest will be 0

    // for(int i = 0; i < 10; i++){
    //     cout << A[i] << endl;
    // }

    //foreach loop
    // for(int x:A)
    // {
    //     cout <<x<<endl;
    // }
    // cout << sizeof(A) << endl; // sizeof return size which 5 times of int
    // cout << A[2] << endl; // cout for C++ language
    // printf("%d\n", A[3]); // printf for C language

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
    // queueArray q(10);
    // q.enqueue(5);
    // q.enqueue(3);
    // q.display();
    // std::cout << "Size: " << q.length() << std::endl;

    return 0;
}
