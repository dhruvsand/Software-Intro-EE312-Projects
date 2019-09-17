/*
 *  EE312 Assignment 4.
 *  On my honor, Dhruv Sandesara, this programming assignment is my own work.
 *
 *  A program Cipher to encryt and decrypt messages
 *
 *  Name: Dhruv Sandesara
 *  email address: dhruvsand@yahoo.com
 *  UTEID: djs3967
 *  Section 5 digit ID: 16130
 *  Number of slip days used on this assignment:0
 *. Total number of slip days used this semester:0
 */
#include <stdio.h>

#include <string.h>


int MAX_SIZE = 6;

void intro(){

    printf("This program demonstrates a transposition cipher.\n"
                   "A cipher is an algorithm to encrypt or decrypt a message.\n"
                   "\n"
                   "This program will demonstrate encrypting a message with\n"
                   "a columnar transposition cipher both with and without\n"
                   "padding characters. The program will then decrypt a message\n"
                   "assuming it was encrypted with a columnar transposition cipher\n"
                   "with padding.\n"
                   "\n"
                   "\n"
                   "A demonstration of encrypting with a columnar transposition cipher:\n\n"
    );


}

void removenewline(char *str, int *length){
    if(*length==0)
        return;

        str[*length-1]='\0';
    *length=*length-1;

}

void encryptNoPadding(char *str, int *length){
    if(*length==0)
        return;

    printf("\nMessage encrypted with columnar transposition cipher and no padding.\n");


    for (int i=2; i<=MAX_SIZE; i++){

        char temp[80]="";
        int x=0;
        int xtemp=0;

        while(strlen(temp)!=*length){
            temp[xtemp]=str[x];
            xtemp++;
            if(x+i>=*length){
                x=x%i +1;
            }
            else
                x=x+i;
        }
        printf("Encrypted with %d rows: %s\n",i,temp);
    }
}

void encryptPadding(char str[], int *length){
    if(*length==0)
        return;
    printf("\nMessage encrypted with columnar transposition cipher and padding.\n\n");

    for (int i=2; i<=MAX_SIZE; i++){

        char temp[80]="";
        char strcopy[80]="";

        int y=0;
        strcopy[y]=str[y];
        while(str[y]!='\0'){
            strcopy[y+1]=str[y+1];
            y++;

        }
        int lengthcopy=strlen(strcopy);



        for(int z=lengthcopy;z%i!=0;z++){
            strcopy[z]='X';
            lengthcopy++;

        }


        int x=0;
        int xtemp=0;

        while(strlen(temp)!=lengthcopy){
            temp[xtemp]=strcopy[x];
            xtemp++;
            if(x+i>=lengthcopy){
                x=x%i +1;
            }
            else
                x=x+i;
        }
        printf("Clear text padded for %d rows: %s\n",i,strcopy);
        printf("Encrypted with %d rows: %s\n\n",i,temp);
    }


}

void decrypt(char *str, int *length){
    if(*length==0)
        return;

    printf("\nMessage decrypted with a columnar transposition cipher:\n\n");


    for (int i=2; i<=MAX_SIZE; i++){

        char temp[80]="";
        char strcopy[80]="";

        int y=0;
        strcopy[y]=str[y];
        while(str[y]!='\0'){
            strcopy[y+1]=str[y+1];
            y++;

        }
        int lengthcopy=strlen(strcopy);

        for(int z=lengthcopy;z%i!=0;z++){
            strcopy[z]='X';
            lengthcopy++;
        }

        int x=0;
        int xtemp=0;

        while(strlen(temp)!=lengthcopy){
            temp[x]=strcopy[xtemp];
            xtemp++;
            if(x+i>=lengthcopy){
                x=x%i +1;
            }
            else
                x=x+i;
        }
        printf("Encrypted text padded for %d rows: %s\n",i,strcopy);
        printf("Decrypted with %d rows: %s\n\n",i,temp);
    }
}

int main(){

    intro();
    char message[80];
    char message2[80];
    printf("Enter the message to encrypt: ");
    fgets(message,80,stdin);

    int length = strlen(message);
    removenewline(message,&length); // REMOVES THE NEW LINE CHARACHTER AT END

    encryptNoPadding(message,&length);
    encryptPadding(message,&length);

    printf("\nA demonstration of decrypting with a columnar transposition cipher.\n"
                   "If the length of the message is not a multiple of the number of rows\n"
                   "it will be padded which may throw off the decryption.\n\n");
    printf("Enter the message to decrypt: ");
    fgets(message2,80,stdin);
    int length2 = strlen(message2);
    removenewline(message2,&length2); // REMOVES THE NEW LINE CHARACHTER AT END

    decrypt(message2,&length2);
    return 0;
}