#ifndef CSLL
#define CSLL
#include"node.hpp"
//Your Code Down Here
class CSLL{
    private:
        int n;
        Node *head;
    public:
        CSLL(){
            n = 0;
            head = nullptr;
        }    

        void allocate(int n) {
        if (n <= 0) return;

        head = new CSLLNode{0, nullptr};
        CSLLNode* curr = head;

        for (int i = 1; i < n; ++i) {
            curr->next = new CSLLNode{i, nullptr};
            curr = curr->next;
        }

        curr->next = head;
    }
};

#endif