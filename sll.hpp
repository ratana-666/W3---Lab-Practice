#ifndef node
#define node


struct sll{
    int data;
    sll* next;
};

class SLL{
    public:
        sll* head;
        SLL(): head(nullptr){}

        void allocation(int n){
            head = nullptr;
            for (int i = 0; i < n; i++)
            {
                sll* nNode = new sll{i, head};
                head = nNode;

            }
            
        }

};
#endif