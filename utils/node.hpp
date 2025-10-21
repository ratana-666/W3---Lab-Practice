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
class DLL{
    private:
        int n;
        dNode *head,*tail;
    public:
        DLL(){
            n = 0;
            head = nullptr;
            tail = nullptr;
        }    
};
class SLL{
    private:
        int n;
        Node *head;
    public:
        SLL(){
            n = 0;
            head = nullptr;
        }    
};
class CSLL{
    private:
        int n;
        Node *head;
    public:
        CSLL(){
            n = 0;
            head = nullptr;
        }    
};



#endif