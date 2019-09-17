// Recursive.c -- EE 312 Project 7

/* Student information for project:
 *
 * Replace <NAME> with your name.
 *
 * On my honor, Dhruv Sandesara, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name:Dhruv Sandesara
 * email address:dhruvsand@yahoo.com
 * UTEID:djs3967
 * Section 5 digit ID:16130
 * Number of slip days used on this assignment. 0
 */

#include <stdio.h>
#include "Recursive.h"
#include <stdbool.h>
#include <string.h>

//  returns the base 2 representation of int n assuming that n is non-negative.
int getBinary(int n){

    if(n==0)
        return 0;//the end statement if nothing remains of the function
    else
    return 10*getBinary((n-(n%2))/2) + n%2;// adds the last digit plus 10 times calculation of the previous digit thus moving the number forward by halfing the original number minus the part which we already accounted for

}



// includes the actual recursive function with the end and the begening didgits
bool PalindromeHelper(int start,int end, char *s){
    if ((start==end)||end<start)
        return true;//if the pointers meet up to the middle charachter in case length is odd or if the whole string is compared in case

    if(s[start]!=s[end])//if charachters are not equal
        return false;

    return PalindromeHelper(start+1,end-1,s);// checking the next pair of charachters by incrementing and decremeing the start and end indices

}


//recursive function that returns true if str is a palindrome, and false otherwise.
bool isPalindrome(char *s){
    if ((strlen(s))==0)
        return true;

    return PalindromeHelper(0,strlen(s)-1,s); //doing the palindrome with the indices and recursive function


}

//function returns the number of elements in data that are directly followed by double that element.
int nextIsDouble(int data[], int N){
    if(N==0||N==1)
        return 0; // if lenth is too small for doubles or reaches end

    if(data[N-1]==2*data[N-2])
        return nextIsDouble(data,N-1) +1; //if is a double then add 1 to the total
    else
        return nextIsDouble(data,N-1); // if not a double then check the next pair

}

// returns true if a drop of water starting at the location specified by row, column can reach the edge of the map, false otherwise.
bool canFlowOff(int M, int N, int map[M][N], int row, int col){

    if(row==0||col==0||row==M-1||col==N-1)
        return true;//checking if reaches the border
    if(map[row][col]==map[row+1][col]==map[row-1][col]==map[row][col-1]==map[row][col-1])
        return false; //if it has reached a dead end
    if(map[row][col]>map[row+1][col])
        return canFlowOff(M,N,map,row+1,col);//if can flow right

    if(map[row][col]>map[row-1][col])
        return canFlowOff(M,N,map,row-1,col);//if can flow left

    if(map[row][col]>map[row][col-1])
        return canFlowOff(M,N,map,row,col-1); //if can flow up

    if(map[row][col]>map[row][col+1])
        return canFlowOff(M,N,map,row,col+1);//if can flow down

    return false;//in worst case scenerio


}