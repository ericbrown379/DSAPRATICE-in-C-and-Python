#include <iostream>
#ifndef NODE_H
#define NODE_H

class Node{
    public:
    int element;
    Node* next;

    public:
    Node(int e, Node* n = nullptr) : element(e), next(n) {}

};
#endif

