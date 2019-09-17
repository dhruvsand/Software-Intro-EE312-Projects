#include<stdio.h>
#include<string.h>
#include "String.h"

void test1() {
  const char *q = "Hello World";
  
  String *s = makeString(q);

  printf("%s \n", s->data);
  printf("the length is %d \n", s->length);
  printf("the capacity is %d \n", s->capacity);
  printf("\n");

  String *t = utStrdup(s);
  printf("%s \n", t->data);
  printf("the length is %d \n", t->length);
  printf("the capacity is %d \n", t->capacity);
  printf("\n");

  utStrfree(t);
  utStrfree(s);
}

void test2() {
  char str1[20] = "hello";
  char str2[20] = " world";
  String *utStr1;
  String *utStr2;

  utStr1 = makeString(str1);
  utStr2 = makeString(str2);

  String *utStr3 = utStrdup(utStr1);
  utStr3 = utStrrealloc(utStr3, 50);
  utStrcat(utStr3, utStr2);

  printf("utStr3: %s\n", utStr3->data);
  printf("\tlength: %u\n", utStr3->length);
  printf("\tcapacity: %u\n", utStr3->capacity);
}

void test3() {
  String *s = makeString("hi");
  s = utStrrealloc(s, 10000);
  fflush(stdout);

  String *ast = makeString("*");

  for(int k = 0; k < 9000; k++) utStrcat(s, ast);
  if(s->data[9000] != '*') printf("Test 3 fails");
  else if(strlen(s->data) != 9002) printf("Wrong string length - test 3 fails\n");

  printf("String length: %u\n", s->length);

  utStrfree(s);
}
void test4(){
  String *s= makeString("No Hard Exam Please!");
  printf("Test String: %s\n",s->data);
  int strlength=utStrlen(s);
  printf("Length of the string is: %d\n",strlength);
  printf("Capacity of the string is: %d\n\n",s->capacity);

  String *t=makeString("1234567");
  printf("Test String: %s\n",t->data);
  strlength=utStrlen(t);
  printf("Length of the string is: %d\n",strlength);
  printf("Capacity of the string is: %d\n",t->capacity);
  utStrcpy(t,s);
  printf("New String of First String Copied Into Second String Is: ");
  printf(t->data);//Should now say "No Hard"
  printf("\n\n");
  utStrfree(s);
  utStrfree(t);
}
void test5(){
  String *s=makeString("Cuphead");
  String *t=makeString(" and Mugman");
  printf("Test String 1: %s\n",s->data);
  printf("Test String 2: %s\n",t->data);
  printf("Length of String 1 is: %d\n",s->length);
  printf("Length of String 2 is: %d\n\n",t->length);
  utStrcat(s,t);//Should not change s.
  printf("Adding String 2 to String 1 Without Changing Capacity: %s\n",s->data);
  printf("Length of String 1 is: %d\n\n",s->length);
  utStrrealloc(s,11);
  utStrcat(s,t);//Should now say "Cuphead and"
  printf("Adding String 2 to String 1 With Changing Capacity: %s\n",s->data);
  printf("Length of String 1 is: %d\n\n",s->length);
  utStrrealloc(s,22);
  utStrcat(s,t);//Should now say "Cuphead and and Mugman"
  printf("Adding String 2 to String 1 With Changing Capacity: %s\n",s->data);
  printf("Length of String 1 is: %d\n\n",s->length);
  utStrfree(s);
  utStrfree(t);
}

int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
}

  
  
