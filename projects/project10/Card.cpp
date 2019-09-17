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
#include<cstdlib>
#include<time.h>
#include "Card.h"

using namespace std;

//initalizes random card
Card::Card(){

    suit= rand()%4;
    value= rand()%13+1; //randomizing the suit and value for the sipulated bouandries
}
//initalizes card for given numbers
Card::Card(int s, int v){
    if(s<0||s>3)
        throw invalid_argument("The Suit number is out of bounds please try again");
    if(v<1||v>13)
        throw invalid_argument("The Value number is out of bounds please try again");//shouldnt ever occur unless someone declares a card which we are not

    suit=s;
    value=v;


} // construct Card with specified values. Throw int exception if args not valid.

//simple accesor function
int Card::getValue(){
    return value;
}
int Card::getSuit(){

    return suit;
}

string Card::toString() const{ //all of these are simple accessor functions or basic functions
    string result="";

    result+=getValueAsString();
    result+=" of ";
    result+= getSuitAsString();

    return result;
}

//just a swithc for the suit value to string
string Card::getSuitAsString()const {

    switch (suit){
        case 0: return "Clubs";
        case 1: return "Diamonds";
        case 2: return "Hearts";
        case 3: return "Spades";

    }
    return "Error";//swithc cases to make life easier self explanatory
}

//same as above just for value
string Card::getValueAsString() const{
    switch (value){

        case 1: return "Ace";
        case 2: return "2";
        case 3: return "3";
        case 4: return "4";
        case 5: return "5";
        case 6: return "6";
        case 7: return "7";
        case 8: return "8";
        case 9: return "9";
        case 10: return "10";
        case 11: return "Jack";
        case 12: return "Queen";
        case 13: return "King";

    }
    return "Error"; // same as above

}

//simple boolean logic funtions
bool Card::sameSuit(Card& other){

    return suit==other.getSuit(); //self explanatory


}
bool Card::sameValue(Card& other){
    return value==other.getValue();//self explanatory
}
//checks if both crieteria match
bool operator ==(Card& c1, Card& c2){

    return (c1.getSuit()==c2.getSuit())&&(c1.getValue()==c2.getValue());//self explanatory
}

//outputs as string to the provided stream
ostream& operator <<(ostream& output, const Card& c){

    output<<c.toString()<<endl; //outputing to whatever stearm needed
    return output;
}



