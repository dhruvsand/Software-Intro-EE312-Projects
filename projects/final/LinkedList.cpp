#include <ostream>
#include <iostream>
using namespace std;
#include "LinkedList.h"



    LinkedList::LinkedList() {
        front = NULL;
    }

void LinkedList::add(int value) {
    if(front==NULL){
        front =new ListNode(value);

    }
    else{
        ListNode * cur=front;
        while(cur->next!=NULL)
            cur=cur->next;

        cur->next = new ListNode(value);
    }

}

int LinkedList::get(int index) const {
    if(index < 0 || index >= size()) throw index;
    ListNode* cur = front;
    for(int i = 0; i < index; i++) cur = cur->next;
    return cur->data;
}

int LinkedList::size() const {
    int size=0;
    ListNode* cur = front;
    while(cur!=NULL){
        cur=cur->next;
        size++;
    }
    return size;

}


void LinkedList::clear() {
    ListNode* cur=front;
    ListNode* pre;
    while(cur!=NULL){
        pre=cur;
        cur=cur->next;


        delete pre;

    }
  front=NULL;

}

void LinkedList::remove(int value) {
    ListNode* pre=front;
    ListNode* cur=front;
    while(cur!=NULL){
        if(cur->data==value){
            if(cur==front){
                front=front->next;
                delete cur;
                cur=front;
                pre=front;

            }
            else{
                pre->next=cur->next;
                delete cur;
                cur=pre->next;


            }}

        else {
                pre=cur;
                cur=cur->next;
            }

        }
}

int LinkedList::sum() {
    ListNode* cur=front;
    int sum=0;
    while(cur!=NULL){
        sum+=cur->data;
        cur=cur->next;
    }

    return sum;



}




















