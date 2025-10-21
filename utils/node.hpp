#ifdef NODE
#defind NODE
    struct sNode{
        int value;
        Node* next;
}
    struct cNode{
        int value;
        Node* next;
}
    struct dNode{
        int value;
        Node* next;
        Node* prv;
}   
class DLL{
    private:
        int n;
        cNode *head,*tail;
    public:
        DLL(){
            n = 0;
            head = nullptr;
            tail = nullptr;
        }    
}
class SLL{
    private:
        int n;
        cNode *head;
    public:
        SLL(){
            n = 0;
            head = nullptr;
            tail = nullptr;
        }    
}
class CSLL{
    private:
        int n;
        cNode *head,*tail;
    public:
        CSLL(){
            n = 0;
            head = nullptr;
            tail = nullptr;
        }    
}



#endif