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
};
#endif