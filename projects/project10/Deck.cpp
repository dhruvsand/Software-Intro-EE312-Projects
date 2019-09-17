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

#include "Deck.h"

//initializes a deck in order
Deck::Deck(){

    deckSize=52;
    top=0;
    for(int i=0;i<4;i++){
        for(int j=1;j<14;j++){
           myDeck.push_back(Card(i,j));//iterating to include all cards in order

        }

    }
}

//shuffles the remaing cards
void Deck::shuffle(){

    int a,b;//2 card indexes
    Card c;//temp varaible
    srand(time(NULL));//the seed randomizer with time
  //  srand(1);



    for (int i=0;i<SHUFFLE;i++){
        a= top + rand()% deckSize;//so as to not shuffle cards that have been dealt and get random number of the cards reamining
        b= top + rand()% deckSize;

        c= myDeck.at(a);//swapping the cards
        myDeck.at(a)=myDeck.at(b);
        myDeck.at(b)=c;


    }


}

//just dea;s the the top cards
Card& Deck::dealCard(){

    deckSize=deckSize-1;
    top= top +1;

    return myDeck.at(top-1);

}

//simple accesor functions
int Deck::getTop(){
    return top;

}


int Deck::getDeckSize(){

    return deckSize;

}

//concated the to strign of each card
string Deck::toString(){

    string result="";

    for (int i=top;i<52;i++){
        result+=myDeck.at(i).toString()+"\n";

    }
    return result;// writing sequentially to the string
}



    
	    
