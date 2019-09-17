// EE 312 Project 10 -- The Game of War

/* Student information for project:
 *
 *
 * On my honor, Dhruv Sandesara, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Dhruv Sandesara
 * email address: dhruvsand@yahoo.com
 * UTEID: djs3967
 * Section 5 digit ID: 16130
 * Number of slip days used on this assignment.0
 */
#ifndef _HAND_H
#define _HAND_H
#include<string>
#include<vector>
#include "Card.h"

using namespace std;
class Hand {
 private:
    int size;
    int top;
    vector<Card> myHand;
 public:
    Hand();
    int getSize();
    string toString();
    int getTop();
    bool isEmpty();
    void addCard(Card& c);
    Card& getNext();
};
#endif
