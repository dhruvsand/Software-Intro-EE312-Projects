#include <stdio.h>

struct node {
    int value;
    struct node *next;

};



int countOccurences(struct node *list,int n){

    int count=0;

    while (list!=NULL) {
        if (list->value == n)
            count++;
        list = list->next;
    }
    return count;




}





int main() {
    printf("Hello, World!\n");
    return 0;
}