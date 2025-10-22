#ifndef CSLL_HPP
#define CSLL_HPP
#include"node.hpp"
//Your Code Down Here
class CSLL{
    private:
        int n;
        Node *head;
        Node *tail;
    public:
        CSLL(){
            n = 0;
            head = nullptr;
            tail = nullptr;
        }    
        void push_front(int value) {
            Node* newNode = new Node{value, nullptr};
            if (!head) {
                head = tail = newNode;
                tail->next = head;
            } else {
                newNode->next = head;
                head = newNode;
                tail->next = head;  // maintain circular link
            }
            n++;
        }

        void push_back(int value) {
            Node* newNode = new Node{value,nullptr};
            if (!head) {
                head = tail = newNode;
                tail->next = head;
            } else {
                tail->next = newNode;
                tail = newNode;
                tail->next = head;  // maintain circular link
            }
            n++;
        }

        void pop_front() {
            if (!head) return;
        
            if (head == tail) {
                delete head;
                head = tail = nullptr;
            } else {
                Node* temp = head;
                head = head->next;
                tail->next = head;  // 
                delete temp;
            }
            n--;
        }
        void pop_back(){
            if(!head) return;
            if(head == tail){
                delete head;
                head = tail = nullptr;
                n--;
            }else{
                Node* temp = head;
                while(temp->next != tail){
                    temp = temp->next;
                }
                temp->next = head;
                tail = temp;
                delete temp;
                
            }
            n--;
        }
        void allocate(int count) {
            for (int i = 1; i <= count; ++i) {
                push_back(i);
            }
            cout << "Allocated " << count << " elements." << endl;
        }
        void rotateRight(int k) {
            if (!head || k == 0 || n <= 1) return;
            k = k % n;
            if (k == 0) return;
            int steps = n - k;
            Node* temp = head;
            for (int i = 0; i < steps - 1; ++i) {
                temp = temp->next;
            }
            head = temp->next;
            tail = temp;
        }
      void deleteWPred(int value) {
            if (!head) return;


            if (head->value == value) {
                pop_front(); // faster and clean
                cout << "Deleted (head): " << value << endl;
                return;
            }
        
         
            Node* pred = head;
            while (pred->next != head && pred->next->value != value)
                pred = pred->next;
        
            if (pred->next == head) {
                cout << "Value not found: " << value << endl;
                return;
            }
        
           
            if (pred->next == tail) {
                pop_back(); // faster path for tail
                cout << "Deleted (tail): " << value << endl;
                return;
            }
        
            
            Node* cur = pred->next;
            pred->next = cur->next;
            delete cur;
            n--;
            cout << "Deleted (middle): " << value << endl;
        }

        void deleteNodeWithoutPred(int value) {
            if (!head) return;
        
        
            if (head->value == value) {
                pop_front();
                cout << "Deleted (head): " << value << endl;
                return;
            }
        
            
            Node* pred = head;
            while (pred->next != head && pred->next->value != value)
                pred = pred->next;
        
            if (pred->next == head) {
                cout << "Value not found: " << value << endl;
                return;
            }
        
            
            if (pred->next == tail) {
                pop_back();
                cout << "Deleted (tail): " << value << endl;
                return;
            }
        
            Node* target = pred->next;
            pred->next = target->next;
            delete target;
            n--;
            cout << "Deleted (middle): " << value << endl;
        }
        void traverseCSLL(int loop){
            if (!head){
                return;
            }
            Node* temp = head;
            for (int i = 0; i < loop; ++i) {
                temp = temp->next; 
            }
        }
        void printList(){
            cout<<"CSLL List"<<endl;
            if(!head) {cout<<"List is Empty"<<endl;}
            Node* temp = head;
            do{
                cout<<temp->value<<"->";
                temp = temp->next;
            }while(temp !=head);
            cout<<endl;
        }
        // ✅ For methods with NO arguments (like pop_front, pop_back)
        void csll_observe(CSLL* obj, void (CSLL::*method)(), const string& msg) {
            auto t0 = clk::now();
            (obj->*method)();
            auto t1 = clk::now();
        
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " nanosecond(s)" << endl;
        }

        // ✅ For methods with ONE int argument (like push_back or allocate)
        void csll_observe(CSLL* obj, void (CSLL::*method)(int), const string& msg, int arg) {
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