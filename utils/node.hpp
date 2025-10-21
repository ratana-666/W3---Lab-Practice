#ifndef NODE_HPP
#define NODE_HPP
#include<iostream>
    struct Node{
        int value;
        Node* next;
};
    struct dNode{
        int value;
        dNode* next;
        dNode* prv;
};



#endif