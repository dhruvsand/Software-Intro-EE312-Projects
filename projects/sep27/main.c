#include <stdio.h>
#include <stdlib.h>

struct node{

    int value;
    struct node *next;

};

struct node *searchList(struct node *list,int n){

    while( list!=NULL){

        if(list->value==n)
            return(list);

        list=list->next;
    }

    return (NULL);



}

int linkedLength (struct node *list){
    int i=0;
    while(list!=NULL){
        i++;
        list=list->next;

    }
    return i;

}



int main() {





    struct node *first;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->value =15;
    newNode->next= first;
    first= newNode;




/*
  struct node newNode;
  newNode.value=15;
  newNode.next = first;
  first = &newNode;
*/




    printf("Hello, World! \n");






    return 0;
}