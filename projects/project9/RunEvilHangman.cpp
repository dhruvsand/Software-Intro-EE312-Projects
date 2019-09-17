#include "EvilHangmanGame.h"
#include <iostream>
#include <sstream>
#include <set>
#include<string>

using namespace std;

// EvilHangmanGame.cpp (or RunEvilHangman.cpp) -- EE 312 Project 9

/* Student information for project:
 *
 *
 * On my honor, Dhruv Sandesara, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name:Dhruv Sandesara
 * email address:dhruvsand@yahoo.com
 * UTEID:djs3967
 * Section 5 digit ID:16130
 * Number of slip days used on this assignment.2
 */

int main(int argc, char* argv[]) {

    string dictionaryname = argv[1];
    int wordsize= atoi(argv[2]);
    int guesses= atoi(argv[3]);

     EvilHangmanGame game;
    game.startGame(dictionaryname,wordsize);

    int stop=1;
    char guess;

    while(stop){


        cout<<"Enter your guess"<<endl;
        cin>>guess;
        guess= tolower(guess);

        game.makeGuess(guess);
        





    }



    
}
