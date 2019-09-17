
#include <iostream>
using namespace std;
#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int d = 0, ListNode* ptr= NULL) {
        data = d;
        next = ptr;
    }
};
class LinkedList {
public:
    LinkedList();
    //~LinkedList(); // destructor
    void add(int value);
    void clear();
    int get(int index) const;
    void insert(int index, int value);
    bool isEmpty() const;
    void remove(int value);
    void set(int index, int value);
    int size() const;
    int sum();

    friend ostream& operator <<(ostream& out, LinkedList& list);

private:
    ListNode * front;
};
#endif
