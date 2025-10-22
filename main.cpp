#include"utils/csll.hpp"
#include"utils/dll.hpp"
#include"utils/sll.hpp"
#include"utils/sllwithtail.hpp"
#include"utils/vector.hpp"

using namespace std;
int main(){
    SLL list_SLL;
    SLLwTail list_SLLwTail;
    CSLL list_CSLL;
    DLL list_DLL;
//A5 Exercise
    // cout << "=== SLL Benchmark ===" << endl;
    // list_SLL.sll_observe(&list_SLL,&SLL::push_front,"SLL Push Front",3);
    // list_SLL.sll_observe(&list_SLL,&SLL::push_back,"SLL Push Back",4);
    // list_SLL.sll_observe(&list_SLL,&SLL::push_back,"SLL Push Back",2);
    // list_SLL.sll_observe(&list_SLL,&SLL::push_front,"SLL Push Front",1);
    // list_SLL.sll_observe(&list_SLL,&SLL::pop_back,"SLL Pop Back");
    // list_SLL.sll_observe(&list_SLL,&SLL::pop_front,"SLL Pop Front");
    // list_SLL.printList();
    // cout<<"\n\n";

    // cout << "=== SLLwTail Benchmark ===" << endl;
    // list_SLLwTail.sllwtail_observe(&list_SLLwTail, &SLLwTail::push_end,  "SLLwTail Push End", 3);
    // list_SLLwTail.sllwtail_observe(&list_SLLwTail, &SLLwTail::push_end,  "SLLwTail Push End", 4);
    // list_SLLwTail.sllwtail_observe(&list_SLLwTail, &SLLwTail::push_front,"SLLwTail Push Front", 2);
    // list_SLLwTail.sllwtail_observe(&list_SLLwTail, &SLLwTail::push_front,"SLLwTail Push Front", 1);
    // list_SLLwTail.sllwtail_observe(&list_SLLwTail, &SLLwTail::pop_end,   "SLLwTail Pop End");
    // list_SLLwTail.sllwtail_observe(&list_SLLwTail, &SLLwTail::pop_front, "SLLwTail Pop Front");
    // list_SLLwTail.printList();
    // cout << "\n\n";


    // cout << "=== DLL Benchmark ===" << endl;
    // list_DLL.dll_observe(&list_DLL, &DLL::push_back,  "DLL Push Back", 3);
    // list_DLL.dll_observe(&list_DLL, &DLL::push_back,  "DLL Push Back", 4);
    // list_DLL.dll_observe(&list_DLL, &DLL::push_front, "DLL Push Front", 2);
    // list_DLL.dll_observe(&list_DLL, &DLL::push_front, "DLL Push Front", 1);
    // list_DLL.dll_observe(&list_DLL, &DLL::pop_back,   "DLL Pop Back");
    // list_DLL.dll_observe(&list_DLL, &DLL::pop_front,  "DLL Pop Front");
    // list_DLL.printList();

//A6 Exercise
    //list_SLL.sll_observe(&list_SLL,&SLL::allocate,"Allocate SLL",1000);
    //list_CSLL.csll_observe(&list_CSLL,&CSLL::allocate,"Allocate CSLL",10000000);
    //list_DLL.dll_observe(&list_DLL,&DLL::allocate,"Allocate DLL",10000000);

//A3 Exercise
    // for (int i = 1; i <= 10; i++) {
    //     list_SLL.push_back(i);
    //     list_CSLL.push_back(i);
    // }
    // cout << "=== Rotate Test (A3) ===" << endl;
    // cout<<"Original List"<<endl;
    // list_SLL.printList();
    // list_CSLL.printList();
    // //K small case
    // list_SLL.sll_observe(&list_SLL, &SLL::rotateRight, "SLL RotateRight", 1);
    // list_CSLL.csll_observe(&list_CSLL, &CSLL::rotateRight, "CSLL RotateRight", 1);
    // cout<<"Rotate by 1"<<endl;
    // list_SLL.printList();
    // list_CSLL.printList();
    // //case if n/2
    // int n_sll = list_SLL.getN();
    // int n_csll = list_CSLL.getN();
    // cout<<endl;
    // list_SLL.sll_observe(&list_SLL, &SLL::rotateRight, "SLL RotateRight",n_sll/2);
    // list_CSLL.csll_observe(&list_CSLL, &CSLL::rotateRight, "CSLL RotateRight", n_csll/2);
    // cout<<"Rotate by n/2"<<endl;
    // list_SLL.printList();
    // list_CSLL.printList();
    // cout<<endl;
    // //case if n - 1
    // list_SLL.sll_observe(&list_SLL, &SLL::rotateRight, "SLL RotateRight",n_sll - 1);
    // list_CSLL.csll_observe(&list_CSLL, &CSLL::rotateRight, "CSLL RotateRight", n_csll - 1);
    // cout<<"Rotate by n-1"<<endl;
    // list_SLL.printList();
    // list_CSLL.printList();
    
    //A4 Exercise
    // for (int i = 1; i <= 10; i++) {
    //     list_SLL.push_back(i);
    //     list_DLL.push_back(i);
    // }
    // cout<<"Before Delete"<<endl;
    // list_SLL.printList();
    // list_DLL.printList();

    // list_SLL.sll_observe(&list_SLL, &SLL::eraseWithoutPredecessor, "SLL Erase (no predecessor)", 4);
    // list_SLL.sll_observe(&list_SLL, &SLL::eraseWithPredecessor, "SLL Erase (with predecessor)", 5);
    // list_DLL.dll_observe(&list_DLL, &DLL::eraseNode, "DLL Erase ", 8);

    // cout<<"After Delete"<<endl;
    // list_SLL.printList();
    // list_DLL.printList();

    //A1 Exercise

    // for (int i = 0; i < 1000; i++) {
    //     list_SLL.push_back(i);
    //     list_CSLL.push_back(i);
    // }

    // cout << "=== A1: Traversal Benchmark ===" << endl;

    // list_CSLL.csll_observe(&list_CSLL, &CSLL::traverseCSLL, "CSLL traverse",10000);
    // list_SLL.sll_observe(&list_SLL, &SLL::traverseSLLManualReset, "SLL manual reset traverse",10000);

//B2
    MyVector mylist;
    for(int i = 1; i <= 8; i++){
        mylist.vec_observe(&mylist,&MyVector::push_front,"Push Value Vector",i);
    }
    for(int i = 0; i < 2; i++){
        mylist.vec_observe(&mylist,&MyVector::pop_front,"Pop Value Vector");
    }
    mylist.printResult();




}