// Function to convert a string to an integer

#include <stdio.h>

// Declare Functions
int stringToInt (const char []);

int main(void) {

  printf ("%d\n", stringToInt("245"));
  printf ("%d\n", stringToInt("100") + 25);
  printf ("%d\n", stringToInt("13x5"));
  
  return 0;
}

// Define Functions
int stringToInt (const char string[]) {
  int i, intValue, result = 0;

  for (i = 0; string[i] >= '0' && string[i] <= '9'; i++) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }

  return result;
}