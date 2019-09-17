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
#include "Hand.h"

using namespace std;
//vector alrealy declaed in .H here initalizing the size and top
Hand::Hand(){
    size=0;
    top=0;
}

//simple accesor function
int Hand::getSize(){
    return size;
}
//sequentially writes the reamining cars into a string and returns it
string Hand::toString(){
    string result="";
    for(int i=top;i<size;i++){
        result+= myHand[i].toString()+"\n";

    }
    return result;

}
//top accesor function
int Hand::getTop(){
    return top;
}


//tells if hand is empty by checking size
bool Hand::isEmpty(){
    return size==0;
}
// simple adding card and incrementing size
void Hand::addCard(Card& c){
    size=size+1;
    myHand.push_back(c);// simple adding card and incrementing size
}

//gets the card from top of hand
Card& Hand::getNext(){
    if(size==0)
       throw "The Hand is empty";// this is how we know the game is over

    size=size-1;//if not reduce size and increment top while return the card from previous top
    top=top+1;
    return myHand.at(top-1);

}
