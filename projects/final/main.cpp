#include <iostream>
using namespace std;

#include "LinkedList.h"

struct listNode {
    int data;
    listNode* next;
};

int main() {
   LinkedList hi = LinkedList();
    hi.add(5);
    hi.add(2);
    hi.add(7);
    hi.add(7);
    hi.add(0);

    cout<<hi.get(0);
    cout<<hi.get(1);
    cout<<hi.get(2);
    cout<<hi.get(3);
    cout<<hi.get(4);

    cout<<hi.sum();
//
//    hi.remove(5);
//    hi.remove(0);
//
//
//
//
//    cout<<hi.get(0);
//    cout<<hi.get(1);
//    cout<<hi.get(2);
//    cout<<hi.get(3);
//    cout<<hi.get(4);



}
