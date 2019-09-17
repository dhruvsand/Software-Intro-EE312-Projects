#include <stdio.h>

int myAtoi(char str[]) {
    int value=0;
    for(int i=0;i<str[i]!='\0';i++){
        value=value*10+(str[i]-48);
    }


    return value;
}

int main(){

    char str[]="123";

    int value =myAtoi(str);
    printf("%d \n", value);

    return 0;
}