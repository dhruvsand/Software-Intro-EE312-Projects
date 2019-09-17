#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>
#include "Poly.h"

/* Student information for project:
 *
 *
 * On my honor, Dhruv Sandesara, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Dhruv Sandesara
 * email address: dhruvsand@yahoo.com
 * UTEID:djs3967
 * Section 5 digit ID: 16130
 * Number of slip days used on this assignment: 0
 */

/*This function takes a string representation src of a polynomial,
 * and returns a pointer to the linked list representation of the polynomial.
 * The linked list must contain only terms with non-zero coefficients, and the
 * nodes for the terms must be listed in decreasing order of degree.
 * No two nodes can represent terms with the same power of x.
 */



Poly makePoly(char *src){
    char str[90];
    strcpy(str,src);
    //copies the string so that it works with the strtok function

    // Returns first token
    char *token = strtok(str, " ");
    char temp;
    int coeef[50];
    int exp[50];
    int i=0;
    int sign=1;
    int length=0;
   while(token!=NULL){
      if(strcmp(token,"+")==0){
           sign=1;
           token = strtok(NULL, " ");
           continue;
       }
       else if(strcmp(token,"-")==0){
           sign=-1;
           token = strtok(NULL, " ");
           continue;
       }
        else if(sscanf(token,"%dx^%d",&coeef[i],&exp[i])==1){
          if(sscanf(token,"%d%c",&coeef[i],&temp)==2)
              exp[i]=1;
          else
              exp[i]=0;

          coeef[i] = sign * coeef[i];

      }
        else {

          sscanf(token, "%dx^%d", &coeef[i], &exp[i]);
          coeef[i] = sign * coeef[i];
      }
       i++;
       length++;
       token = strtok(NULL, " ");


   }


    i=0;
    Poly ans=NULL;
    struct node *list=NULL;
    struct node *prev=NULL;

//    ans->list=list;
    if(length)
    ans=malloc(sizeof(Poly));
    else
        return ans;


    while (length){
        list=malloc(sizeof(struct node));
        if(i==0)
            ans->list=list;

        list->coeff=coeef[i];
        list->exp=exp[i];
        list->next=NULL;
        if(i!=0)
        prev->next=list;


        prev=list;
        length--;
        i++;
    }





    return 0;



  /*  char str[90];
    strcpy(str,src);
    //copies the string so that it works with the strtok function

    // Returns first token
    char *token = strtok(str, " ");

    int i=0; //to keep track of input of exponent and coeeficinet where 0 is coeffint and 1 is exponent
    int coef=0;
    int exp =0;

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {


        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
*/

/*    int i=0; // index of the passed src
    int j=0;// index of the temporary j
    int coef=0, exp =0, sign =1;
    char str[10]={};

    while(src[i]!=NULL){

        while(src[i]!='x'||src[i]!=' '||src[i]!='\0'||src[i]!='^') {
            str[j] = src[i];
            j++;
            i++;
            //copied the characters in temp str untile delimitaor reached
        }
        if (src[i]=='x')
            coef = sign*atoi(str);
        if(src[i]==' ')

        printf("%c",src[i]);
        i++;

    }

    return 0;

*/



}


/*This function creates a copy of the polynomial that src references.
 * The original polynomial and the copy should not share nodes - each node
 * in the src polynomial will be duplicated for the copy.
 */
Poly polyCopy(Poly src){


}

double power(double base, double exp) {
    int i;
    double result = 1;
    for (i = 0; i < exp; i++)
        result *= base;
    return result;
}

//This function returns the polynomial function's value at x = val.
double polyEval(Poly src, double val){

    double sum=0;

    while(src->list!=NULL){

        sum=sum + src->list->coeff*power(val,src->list->exp);

        src->list=src->list->next;

    }
    return sum;

}


/*This function returns the sum of the polynomial arguments.
 * Neither of the arguments are modified. You will be dynamically
 * creating a new linked list to hold the result of the operation.
 */
Poly polyAdd(Poly one, Poly two){


}

/*This function returns the product of the polynomial arguments.
 * Neither of the arguments are modified. You will be dynamically creating a new
 * linked list to hold the result of the operation.
 */
Poly polyMult(Poly one, Poly two){



}



/*This function modifies the poly one by adding the monomial term with the specified
 * coefficient and exponent. Note that this may require creating a new node in the
 * polynomial's linked list representation, modifying the fields in an existing node,
 * or doing nothing (e.g., if the coefficient argument is 0 or the exponent is negative.)
 * If a high order term is added, the pointer to the list will need to be updated.
 */
void addTerm(Poly one, int coeff, int exponent){


}


/*If the src polynomial is of degree 2 or less, return the number of
 * distinct real roots of the polynomial. If the polynomial is of degree 3 or higher, return -1.
 */
int realRoots(Poly src){
    if(src->list->exp>2)
        return -1;
    if(src->list->exp!=2)
        return src->list->exp;
    if(src->list==NULL)
        return 0;

    int a=0,b=0,c=0;
    a=src->list->coeff;

    if(src->list->next==NULL) {
        if (a == 0)
            return 0;
        else
            return 1;
    }

    src->list=src->list->next;
    if(src->list->exp==1){
        b=src->list->coeff;

        if(src->list->next!=NULL){
            c=src->list->next->coeff;
        }

    }
   else if(src->list->exp==0){
        c=src->list->coeff;
    }
   int d=0;
    d= b*b-4*a*c;

    if(d<0)
        return 0;
    if(d==0)
        return 1;
    else
        return 2;


}


/*This function returns a string representation of the polynomial.
 * The non-zero terms should be given in order of decreasing exponent, and
 * the ^ symbol should be used to indicate exponentiation. The portion of the
 * string that represents a term should not contain embedded space, and each +
 * or - (subtraction) in the polynomial should contain a single blank space before
 * and after it. You may assume that the string representation of the polynomial is
 * at most 100 characters. Do not print coefficients equal to 1 except in constant terms.
 * Negative coefficients should be represented in your string as a subtraction in terms after
 * the high-order term. E.g., the string should be 3x^2 - 2x, not 3x^2 + -2x.
 */
char *stringPoly(Poly src){

return 'a';
}



//This function returns true if the two polynomials are equal, and false otherwise.
bool polyEqual(Poly one, Poly two){
    struct node *nexttwo=NULL,*nextone=NULL;

    if(one->list!=NULL)
     nextone=one->list->next;
    if(two->list!=NULL)
     nexttwo=two->list->next;
    while(one->list->exp!=0||two->list->exp!=0){
        if(one->list->exp!=two->list->exp)
            return false;
        if(one->list->coeff!=two->list->coeff)
            return false;

        one->list=nextone;
        two->list=nexttwo;
        nextone=one->list->next;
        nexttwo=two->list->next;
    }
    if(one->list->exp!=two->list->exp)
        return false;
    if(one->list->coeff!=two->list->coeff)
        return false;


    return true;



}


//Destroy the polynomial and deallocate all memory associated with it.
void deletePoly(Poly one){
    struct node *next=NULL;
    if(one->list!=NULL)
    next=one->list->next;
    else{
        free(one);
        return;
    }


    while(one->list!=NULL){
        free(one->list);
        one->list=next;

        if(one->list!=NULL)
        next=one->list->next;
        else{
            free(one);
            return;
        }

    }


}
	    
