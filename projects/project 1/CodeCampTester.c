#include<stdio.h>
#include<stdbool.h>
int hammingDistance(int aList[], int bList[], int len);
int sum3or5Multiples();
bool lastDigit(int, int);
int reverseInt(int); 

// CodeCampTester.c -- EE 312 Project 1 -- Tester class

/* Student information for assignment:
 * 
 * Name: Dhruv Sandesara
 * email address: dhruvsand@yahoo.com
 * UTEID: djs3967
 * Section 5 digit ID: 16100
 * Number of slip days used on this assignment: 
 */

int main() {
  
  // test 1, hammingDistance
  int h1[] = {1, 3, 3, 4, 5, 4, 3, 7, 1};
  int h2[] = {1, 3, 10, 4, 5, 4, 3, -10, 1};
  int expected = 2;
  int actual = hammingDistance(h1, h2, 9);
  printf("Test 1 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 1, hamming distance\n\n");
  else printf("**** FAILED **** test 1, hamming distance\n\n");

  // test 2, hamming distance
  int h3[] = {1, 2, 3, 6, 5, 7, 7, 8, 9, 10};
  int h4[] = {-6, -6, -6, -6, -6, -6, -6, -6, -6, -6}; 
  expected = 10;
  actual = hammingDistance(h3, h4, 10);
  printf("Test 2 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 2, hamming distance\n\n");
  else printf("**** FAILED **** test 2, hamming distance\n\n");

  // test 3, hamming distance
  int h5[40000] = {0};
  int h6[40000] = {0};
  expected = 0;
  actual = hammingDistance(h5, h6, 40000);
  printf("Test 3 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 3, hamming distance\n\n");
  else printf("**** FAILED **** test 3, hamming distance\n\n");

  // test 4, last digit
  int n1 = 1;
  int n2 = 120;
  expected = false;
  actual = lastDigit(n1, n2);
  printf("Test 4 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 4, last digit\n\n");
  else printf("**** FAILED **** test 4, last digit\n\n");

  // test 5, last digit
  n1 = -26;
  n2 = 1534;
  expected = false;
  actual = lastDigit(n1, n2);
  printf("Test 4 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 5, last digit\n\n");
  else printf("**** FAILED **** test 5, last digit\n\n");

  // test 6, last digit
  n1 = 14;
  n2 = 3115;
  expected = false;
  actual = lastDigit(n1, n2);
  printf("Test 6 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 6, last digit\n\n");
  else printf("**** FAILED **** test 6, last digit\n\n");

  // test 7, sum of multiples of 3 or 5
  expected = 233168;
  actual = sum3or5Multiples();
  printf("Test 7 sum of multiples: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 7, sum of multiples of 3 or 5\n\n");
  else printf("**** FAILED **** test 7, sum of multiples of 3 or 5\n\n");

  // test 8, reverse int
  n1 = -431;
  expected = -134;
  actual = reverseInt(n1);
  printf("Test 8 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 8, reverse int\n\n");
  else printf("**** FAILED **** test 8, reverse int\n\n");

  // test 9, reverse int
  n1 = 202;
  expected = 202;
  actual = reverseInt(n1); 
  printf("Test 9 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 9, reverse int\n\n");
  else printf("**** FAILED **** test 9, reverse int\n\n");

  // test 10, reverse int
  n1 = 10003;
  expected = 30001;
  actual = reverseInt(n1); 
  printf("Test 10 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  printf("passed test 10, reverse int\n");
  else printf("**** FAILED **** test 10, reverse int\n");

}

