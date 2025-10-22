#ifndef NODE_HPP
#define NODE_HPP
#include<iostream>
#include<chrono>

using namespace std;
using clk = chrono::high_resolution_clock;
volatile int sink_int = 0;
    struct Node{
        int value;
        Node* next;
};
    struct dNode{
        int value;
        dNode* next;
        dNode* prev;
};



#endif