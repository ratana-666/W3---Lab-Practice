#ifndef VECTOR_HPP
#define VECTOR_HPP

#include<vector>
#include<iostream>
#include<chrono>
using namespace std;
using clk = chrono::high_resolution_clock;
class MyVector{
    private:
        vector<int>list;
    public:
        void push_front(int value){
            list.push_back(value);
        }
        void pop_front(){
            if (list.empty()) {
            cout << "Nothing to undo.\n";
            return;
            }
            list.pop_back();
        }
         void printResult() {
        for (auto it = list.rbegin(); it != list.rend(); ++it)
            cout << *it << " ";
        cout << endl;
    }
        void vec_observe(MyVector* obj, void (MyVector::*method)(), const string& msg) {
            auto t0 = clk::now();
            (obj->*method)();
            auto t1 = clk::now();
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " ns" << endl;
        }
        // Timing for methods with one int arg
        void vec_observe(MyVector* obj, void (MyVector::*method)(int), const string& msg, int arg) {
            auto t0 = clk::now();
            (obj->*method)(arg);
            auto t1 = clk::now();
            auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
            cout << msg << ": " << duration.count() << " ns" << endl;
        }
};

#endif
