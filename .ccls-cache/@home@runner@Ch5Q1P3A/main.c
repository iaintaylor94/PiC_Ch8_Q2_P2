// program to generate the first 200 triangular numbers.

#include <stdio.h>

int main(void) {

  int n, triangularNumber;

  printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf (" n   Sum from 1 to n\n");
  printf ("---  ---------------\n");

  triangularNumber = 0;

  for (n = 1; n<=10; n++) {
    triangularNumber += n;
    printf (" %2i       %i       \n", n , triangularNumber); // Field width of 2
  }
  
  return 0;
}