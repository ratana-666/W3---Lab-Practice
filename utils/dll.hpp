#ifndef DLL
#define DLL
#include"node.hpp"
//Your Code Down Here
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
        
        
        void allocate(int n) {
        head = nullptr;
        dll* prevNode = nullptr;

        for (int i = 0; i < n; ++i) {
            dll* newNode = new dll{i, prevNode, nullptr};
            if (prevNode) prevNode->next = newNode;
            else head = newNode;
            prevNode = newNode;
        }
    }

};
#endif