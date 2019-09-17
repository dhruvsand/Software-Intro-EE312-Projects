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
#ifndef _CARD_H
#define _CARD_H

#include<ostream>
#include<string>

using namespace std;

const int SPADES = 3;
const int HEARTS = 2;
const int DIAMONDS = 1;
const int CLUBS = 0;

const int ACE = 1;
const int JACK = 11;
const int QUEEN = 12;
const int KING = 13;

class Card {
 private:
    int suit;
    int value;
 public:
    Card(); // random valid card
    Card(int suit, int value); // construct Card with specified values. Throw int exception if args not valid.
    int getValue();
    int getSuit();
    string toString() const;
    string getSuitAsString() const;
    string getValueAsString() const;
    bool sameSuit(Card& other);
    bool sameValue(Card& other);
};

bool operator ==(Card& c1, Card& c2);
ostream& operator <<(ostream& output, const Card& c);

#endif
    
