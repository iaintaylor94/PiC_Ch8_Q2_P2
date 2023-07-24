#include <stdio.h>

// Declare functions
int calculateTriangularNumber (int);

int main(void) {

  int n, number, triangularNumber, counter;

  for (counter = 1; counter <= 5; counter++) {

      printf ("What triangular number do you want? ");
      scanf ("%i", &number);

      triangularNumber = 0;

      triangularNumber = calculateTriangularNumber (number);

      printf ("Triangular number %i is %i\n\n", number, triangularNumber);
  }
  
  return 0;
}

// Define functions
int calculateTriangularNumber (int number) {
  // Initialize triangular number
  int triangularNumber = 0;

  // Calculate triangular number
  for (int i = 1; i <= number; i++) {
    triangularNumber += i;
  }

  // Return triangular number
  return triangularNumber;
}