#ifndef SLL_HPP
#define SLL_HPP
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
        void push_front(int value){
            Node *temp = new Node{value,nullptr};
            temp->next = head;
            head = temp;
            n++;
        }
        void pop_front(){
            if(n == 0){
                cout<<"It Already Empty";
                return;
            }
            Node *temp = head;
            head = head->next;
            delete temp;
            n--;
        }
        void push_back(int value){
            if(n == 0){
                push_front(value);
                return;
            }
            Node* temp = head;
            _traverse(temp);
            Node* nNode = new Node{value,nullptr};
            temp->next = nNode;
            n++;
            
        }
        void pop_back(){
            if(n==0){
                cout<<"It Empty"<<endl;
                return;
            }
            Node* temp = head;
            
            while(temp->next->next){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
        void _traverse(Node*& temp){
            temp = head;
            while(temp->next){
                temp = temp->next;
            }
        }
        void eraseWithPredecessor(int value) {
            if (!head) return;

            if (head->value == value) {
                Node* temp = head;
                head = head->next;
                delete temp;
                n--;
                return;
            }

            Node* prev = head;
            Node* curr = head->next;

            while (curr) {
                if (curr->value == value) {
                    prev->next = curr->next;
                    delete curr;
                    n--;
                    return;
                }
                prev = curr;
                curr = curr->next;
            }
        }
        void eraseWithoutPredecessor(int value) {
            if (!head) return;

            if (head->value == value) {
                Node* temp = head;
                head = head->next;
                delete temp;
                n--;
                return;
            }

            Node* curr = head;

            while (curr->next) {
                if (curr->next->value == value) {
                    Node* temp = curr->next;
                    curr->next = curr->next->next;
                    delete temp;
                    n--;
                    return;
                }
                curr = curr->next;
            }
        }
        void traverseSLLManualReset(int loop) {
            if (!head){
                return;
            }
            Node* temp = head;
            for (int i = 0; i < loop; ++i) {
                if (!temp) temp = head; 
                temp = temp->next;
            }
        }       
        void allocate(int count) {
            for (int i = 1; i <= count; ++i) {
                push_back(i);
                n++;
            }
            cout << "Allocated " << count << " elements." << endl;
        }
        void printList(){
            cout<<"SLL List"<<endl;
            Node* temp = head;
            while(temp){
                cout<<temp->value<<"->";
                temp = temp->next;
            }
            cout<<endl;
        }
        void rotateRight(int k) {
            if (!head || n <= 1 || k == 0) return;

            k = k % n;
            if (k == 0) return;

            int steps = n - k - 1;
            Node* newTail = head;

            
            for (int i = 0; i < steps; ++i) {
                newTail = newTail->next;
            }

            Node* newHead = newTail->next;
            newTail->next = nullptr;

            Node* oldTail = newHead;
            while (oldTail->next) {
                oldTail = oldTail->next;
            }

            oldTail->next = head;
            head = newHead;
        }   
        // ✅ For methods with NO arguments (like pop_front, pop_back)
        void sll_observe(SLL* obj, void (SLL::*method)(), const string& msg) {
            auto t0 = clk::now();
            (obj->*method)();
            auto t1 = clk::now();
        
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " nanosecond(s)" << endl;
        }

        // ✅ For methods with ONE int argument (like push_back or allocate)
        void sll_observe(SLL* obj, void (SLL::*method)(int), const string& msg, int arg) {
            auto t0 = clk::now();
            (obj->*method)(arg);
            auto t1 = clk::now();
        
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " nanosecond(s)" << endl;
        }
        int getN(){
            return n;
        }
};

#endif