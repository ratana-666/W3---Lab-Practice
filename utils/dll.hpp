#ifndef DLL_HPP
#define DLL_HPP
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
        void push_front(int value) {
            dNode* temp = new dNode{value, nullptr, nullptr};
            if (!head) {
                head = tail = temp;
            } else {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
            n++;
        }

        void push_back(int value) {
            dNode* temp = new dNode{value, nullptr, nullptr};
            if (!head) {
                head = tail = temp;
            } else {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
            n++;
        }
        void pop_front() {
            if (!head) {
                cout << "Already empty." << endl;
                return;
            }
        
            if (n == 1) { // only one element
                delete head;
                head = tail = nullptr;
                n = 0;
                return;
            }
        
            dNode* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
            n--;
        }   

        void pop_back() {
            if (!tail) {
                cout << "Already empty." << endl;
                return;
            }

            if (n == 1) { // only one element
                delete tail;
                head = tail = nullptr;
                n = 0;
                return;
            }

            dNode* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
            n--;
        }
        void eraseNode(int value) {
            if (!head) {
                cout << "List is empty." << endl;
                return;
            }
        
            // Case 1: if the value is at the head
            if (head->value == value) {
                pop_front();  // faster built-in removal
                return;
            }
        
            // Case 2: if the value is at the tail
            if (tail->value == value) {
                pop_back();  // faster built-in removal
                return;
            }
        
            // Case 3: find node in the middle
            dNode* current = head->next; // skip head since already checked
            while (current && current->value != value) {
                current = current->next;
            }
        
            if (!current) {
                cout << "Value " << value << " not found." << endl;
                return;
            }
        
            // Delete middle node
            current->prev->next = current->next;
            current->next->prev = current->prev;
        
            delete current;
            n--;
        }
        void allocate(int count) {
            for (int i = 1; i <= count; ++i) {
                push_back(i);
            }
            cout << "Allocated " << count << " elements." << endl;
        }
        void printList(){
            cout<<"DLL List"<<endl;
            dNode* temp = head;
            while(temp){
                cout<<temp->value<<"->";
                temp = temp->next;
            }
            cout<<endl;
        }
        // ✅ For methods with NO arguments (like pop_front, pop_back)
        void dll_observe(DLL* obj, void (DLL::*method)(), const string& msg) {
            auto t0 = clk::now();
            (obj->*method)();
            auto t1 = clk::now();
        
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " nanosecond(s)" << endl;
        }

        // ✅ For methods with ONE int argument (like push_back or allocate)
        void dll_observe(DLL* obj, void (DLL::*method)(int), const string& msg, int arg) {
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