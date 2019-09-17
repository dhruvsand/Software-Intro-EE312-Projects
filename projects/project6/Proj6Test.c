#include<stdio.h>
#include<string.h>
#include "Poly.h"


int main() {

  // test 1, makePoly and stringPoly

    Poly p1, p2;

    p1 = makePoly("3x^2 + 5x + 2");
    p2 = makePoly("-2x + 6");

    if(strcmp(stringPoly(p1),"3x^2 + 5x + 2") == 0 && strcmp(stringPoly(p2), "-2x + 6") == 0){
    printf("Test 1 makePoly and stringPoly: passed\n");
  }
    else{
    printf("Test1 makePoly and stringPoly: failed\n");
  }

  
  // test 2, polyMult
  Poly ans = polyMult(p1, p2);
  if(strcmp(stringPoly(ans), "-6x^3 + 8x^2 + 26x + 12") == 0) {
    printf("Test2 polyMult: passed\n");
  }
  else{
    printf("Test 2 polyMult: failed\n");
  }

}
    

  
  

