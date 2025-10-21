#include"utils/csll.hpp"
#include"utils/dll.hpp"
#include"utils/sll.hpp"
#include<iostream>
#include<chrono>

using namespace std;
using namespace chrono;

class SLL;

void sll_observe(SLL* obj, void (SLL::*method)(), string msg) {
    auto t0 = clk::now();

    (obj->*method)(); // perform operation

    auto t1 = clk::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(t1 - t0);
    cout << msg << ": " << duration.count() << " nanosecond(s)" << endl;
}


using namespace std;
int main(){
    SLL slllist;
    int n = 100;
    sll_observe(&sllList, [n,&sllList]() { sllList.allocation(n); }, "SLL allocation");
    return 0;
    
}