#ifndef SLL
#define SLL
#include"node.hpp"
//Your Code Down Here
class SLL{
    private:
        int n;
        Node *head;
    public:
        SLL(){
            n = 0;
            head = nullptr;
        }    

        void allocation(int n){
            head = nullptr;
            for (int i = 0; i < n; i++)
            {
                sll* nNode = new sll{i, head};
                head = nNode;

            }

};


#endif