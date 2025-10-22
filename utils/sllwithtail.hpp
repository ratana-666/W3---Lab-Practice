#ifndef SLLwTailwTAIL_HPP
#define SLLwTailwTAIL_HPP
#include"node.hpp"

class SLLwTail{
    private:
        int n;
        Node *head,*tail;
    public:
        SLLwTail(){
            n = 0;
            head = nullptr;
            tail = nullptr;
        }
        void push_front(int value){
            Node* temp = new Node{value,nullptr};
            if(!head){
                head = tail = temp;
            } else{
                temp->next = head;
                head = temp;
            }
            n++;
        }
        void push_end(int value){
            Node* temp = new Node{value,nullptr};
            if(!head){
                head = tail = temp;
            }else {
                tail->next = temp;
                tail = temp;
            }
            n++;
        }
        void pop_front(){
            if( n == 0){
                cout<<"Already Empty"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
            n--;
            if (n == 0) tail = nullptr;
        }
        void pop_end() {
            if (!head) {
                cout << "Already empty." << endl;
                return;
            }

            if (n == 1) { // oonly one element
                delete head;
                head = tail = nullptr;
                n--;
                return;
            }
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }

            delete tail;
            tail = current;
            tail->next = nullptr;
            n--;
        }
        void printList(){
            cout<<"SLL with Tail List"<<endl;
            Node* temp = head;
            while(temp){
                cout<<temp->value<<"->";
                temp = temp->next;
            }
        }
        // ✅ For methods with NO arguments (like pop_front, pop_back)
        void sllwtail_observe(SLLwTail* obj, void (SLLwTail::*method)(), const string& msg) {
            auto t0 = clk::now();
            (obj->*method)();
            auto t1 = clk::now();
        
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " nanosecond(s)" << endl;
        }

        // ✅ For methods with ONE int argument (like push_back or allocate)
        void sllwtail_observe(SLLwTail* obj, void (SLLwTail::*method)(int), const string& msg, int arg) {
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
