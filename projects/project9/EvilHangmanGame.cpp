#include "EvilHangmanGame.h"
#include <fstream>
#include <iostream>
#include <set>
#include <map>
#include <string>

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
//set<string> currentWords;  // current word bank, i.e., active word list
//int currentWordsLength;    // word length chosen by user
//set<char> guesses;         // characters that the user has guessed

EvilHangmanGame::EvilHangmanGame() {


}




void EvilHangmanGame::startGame(string dictionaryFile, int wordLength) {
    currentWordsLength=wordLength;


    ifstream file;
    file.open(dictionaryFile);

    if( !file.is_open() ) {
        cout << "Unable to open File" << endl;
        return;
    }



    string data;
    while( getline(file, data)){

        if(data.length()==wordLength)
        currentWords.insert( data);//populates current words with same length words from dictionary
    }

    if (currentWords.empty()){
        cout << "Unable to find words matching the size" << endl;
        return;

    }

}

set<string> EvilHangmanGame::makeGuess(char guess) {

    
}






