#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

// CodeCamp.c -- EE 312 Project 1

/* Student information for project:
 *
 * Replace <NAME> with your name.
 *
 * On my honor, Dhruv Sandesara, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Dhruv Sandesara
 * email address: dhruvsand@yahoo.com
 * UTEID: djs3967
 * Section 5 digit ID: 16100
 * Number of slip days used on this assignment.
 */



/* Determine the hamming distance between two int arrays.
   pre: aList != null, bList != null, aList.length == bList.length == len
   post: return hamming distance between the two arrays of ints.
   Neither parameter should be altered by this function.
*/
int hammingDistance(int aList[], int bList[], int len) {
    int count=0;
    for (int i=0;i<len;i++){
        if(aList[i]!=bList[i])
            count++;
    }
    return count;
  
  // EE 312 Students: put your code here

}

/* Determine if two ints have the same last digit.
   Note that the last digit of 0 is 0 and the last digit of -12 is 2. 
   post: return true if x and y have the same last digit, false otherwise.
*/
bool lastDigit(int x, int y) {
 
  // EE 312 Students: put your code here
    if((x%10)==(y%10))
    return true;
    if((-x%10)==(y%10))
        return true;


    return false;

}

/* Determine the sum of the positive integers less than 1000 that are multiples of 3 or 5 (or both).
   post: return the sum of the integers from 1 to 1000 that are multiples of 3 or 5 or both.
*/
int sum3or5Multiples() {

  // EE 312 Students: put your code here
    int sum=0;

    for(int i=0;i<1000;i++){

        if(i%3==0)
            sum+=i;
        else if(i%5==0)
            sum+=i;

    }


    return sum;
}

/* Reverse the digits of an integer. Return the reversed number if it is in the range of type int, 0 otherwise.
   post: return x with digits reversed if the reverse can be stored as an int, 0 otherwise.
*/
int reverseInt(int x) {

  // EE 312 Students: put your code here
    int reverse=0;

    while(x!=0){

        reverse =reverse*10 + x%10;

        x=x/10;


    }



    return reverse;
}

  

