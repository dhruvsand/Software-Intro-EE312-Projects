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
#include<iostream>

#include "Deck.h"
#include "Hand.h"

using namespace std;

int main() {


    Deck gamedeck;//the deck for the game
    gamedeck.shuffle();//shuffle it

    int rounds = 0, wars = 0;//count of rounds and wars
    Hand p1, p2;


    for (int i = 0; i < 52; i = i + 2) {
        p1.addCard(gamedeck.dealCard());
        p2.addCard(gamedeck.dealCard());//we gave each players their hands

    }


    cout << "Hand of Player 1:" << endl;
    cout << p1.toString() << endl;
    cout << "Hand of Player 2:" << endl;
    cout << p2.toString() << endl;//output all the cards

    try {

        while (rounds < 5000) {


            //will add the case of running out of hards here done at end
            //also need to take care of running out at same time done
            //also add ace case done

            Card c1 = p1.getNext();
            Card c2 = p2.getNext();


            rounds++;//increment after exception thrown so that there are not one extra rounds reported

            if ((c1.getValue() == 1 && c2.getValue() != 1)) {//p1 has the higher number ace rule
                p1.addCard(c1);
                p1.addCard(c2);
            } else if ((c2.getValue() == 1 && c1.getValue() != 1)) {//p2 has the higher number ace rule
                p2.addCard(c2);
                p2.addCard(c1);
            } else if ((c1.getValue() > c2.getValue())){ //numerically higher number p1
                p1.addCard(c1);
                p1.addCard(c2);

            } else if ((c2.getValue() > c1.getValue())) { //numerically higher number p2
                p2.addCard(c2);
                p2.addCard(c1);

            } else {//the war case;
                wars++;//increment war

                vector<Card> p1table, p2table;
                p1table.push_back(c1);//adding back to the war deck so can be easily added
                p2table.push_back(c2);

                int continuebit = 1;//will decide if war goes on

                while (continuebit) {
                    Card c3 = p1.getNext();//beacus the retrun type was pointers
                    Card c4 = p2.getNext();
                    p1table.insert(p1table.begin(), c3);
                    p2table.insert(p2table.begin(), c4);// putting in the face down cards


                    Card c5 = p1.getNext();//beacus the retrun type was pointers
                    Card c6 = p2.getNext();
                    p1table.insert(p1table.begin(), c5);
                    p2table.insert(p2table.begin(), c6);// putting in the face up cars which will be compared

                    //compareing the two war cards now

                    if ((c5.getValue() == 1 && c6.getValue() != 1)) {//p1 has won the war
                        continuebit = 0;

                        for (vector<Card>::iterator it = p1table.begin(); it != p1table.end(); it++)
                            p1.addCard(*it);//adding the winning deck on top of the bottom
                        for (vector<Card>::iterator it = p2table.begin(); it != p2table.end(); it++)
                            p1.addCard(*it);//adding the losing deck on top of the bottom

                    } else if ((c6.getValue() == 1 && c5.getValue() != 1)) {//p2 has won the war
                        continuebit = 0;
                        for (vector<Card>::iterator it = p2table.begin(); it != p2table.end(); it++)
                            p2.addCard(*it);//adding the winning deck on top of the bottom
                        for (vector<Card>::iterator it = p1table.begin(); it != p1table.end(); it++)
                            p2.addCard(*it);//adding the losing deck on top of the bottom
                    } else if((c5.getValue() > c6.getValue())){
                        continuebit = 0;

                        for (vector<Card>::iterator it = p1table.begin(); it != p1table.end(); it++)
                            p1.addCard(*it);//adding the winning deck on top of the bottom
                        for (vector<Card>::iterator it = p2table.begin(); it != p2table.end(); it++)
                            p1.addCard(*it);//adding the losing deck on top of the bottom

                    } else if((c6.getValue() > c5.getValue())){
                        continuebit = 0;
                        for (vector<Card>::iterator it = p2table.begin(); it != p2table.end(); it++)
                            p2.addCard(*it);//adding the winning deck on top of the bottom
                        for (vector<Card>::iterator it = p1table.begin(); it != p1table.end(); it++)
                            p2.addCard(*it);//adding the losing deck on top of the bottom

                    } else {
                        continuebit = 1;//by deafult go to the next war
                    }
                }
            }
        }
        cout << "The game was a draw after 5000 rounds" << endl;
        cout << "There were " << wars << " wars";//the draw case of running out of rounds

    }
    catch (const char *s) {
        if (p1.isEmpty() && p2.isEmpty()) { //both run out of cards draw
            cout << "The game was a draw as both players ran out of cards after " << rounds << " rounds"<<endl;
            cout << "There were " << wars << " wars"<<endl;
        } else if (p1.isEmpty()) {// p1 runs out of cards
            cout << "Player 1 Lost after " << rounds << " rounds"<<endl;
            cout << "There were " << wars << " wars"<<endl;
        } else if(p2.isEmpty()){//p2 runs out of cards
            cout << "Player 2 Lost after " << rounds << " rounds"<<endl;
            cout << "There were " << wars << " wars"<<endl;

        }


    }
}
