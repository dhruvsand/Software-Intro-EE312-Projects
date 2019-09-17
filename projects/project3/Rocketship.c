/*
 *  EE312 Assignment 3.
 *  On my honor, <NAME>, this programming assignment is my own work.
 *
 *  A program to print out a Rocketship in ASCII art form.
 *
 *  Name: Dhruv Sandesara
 *  email address: dhruvsand@yahoo.com
 *  UTEID: djs3967
 *  Section 5 digit ID: 16130
 *  Number of slip days used on this assignment:0
 *. Total number of slip days used this semester:0
 */

#include <stdio.h>
const int SIZE = 3;


void head(){

    for(int x=1; x<(2*SIZE);x++){

        for(int i=0;i<(2*SIZE-x);i++)
            printf(" ");

        for(int i=0;i<x;i++)
            printf("/");

        printf("**");

        for(int i=0;i<x;i++)
            printf("\\");

        printf("\n");

    }
}

void divider(){
    printf("+");

    for(int i=0;i<2*SIZE;i++)
        printf("=*");

    printf("+\n");

}

void topdiamond(){


    for(int i=0;i<SIZE;i++){
        printf("|");
      for(int x=0; x<SIZE-1-i;x++)
          printf(".");

        for(int x=0;x<i+1;x++)
            printf("/\\");

        for(int x=0; x<2*(SIZE-1-i);x++)
            printf(".");

        for(int x=0;x<i+1;x++)
            printf("/\\");

        for(int x=0; x<SIZE-1-i;x++)
            printf(".");


        printf("|\n");


    }



}

void bottomdiamond(){

    for(int i=0;i<SIZE;i++){
        printf("|");
        for(int x=0; x<i;x++)
            printf(".");

        for(int x=0;x<(SIZE-i);x++)
            printf("\\/");

        for(int x=0; x<2*(i);x++)
            printf(".");

        for(int x=0;x<(SIZE-i);x++)
            printf("\\/");

        for(int x=0; x<i;x++)
            printf(".");


        printf("|\n");


    }


}






int main() {

    head();
    divider();
    topdiamond();
    bottomdiamond();
    divider();
    bottomdiamond();
    topdiamond();
    divider();
    head();

    return 0;
}
