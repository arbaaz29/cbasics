#include <stdio.h>

int main() {
  // Signed integers
  int signedInt = -10;
  printf("Signed Integer: %d\n", signedInt);

  // Unsigned integers
  unsigned int unsignedInt = 20;
  printf("Unsigned Integer: %u\n", unsignedInt);

  // Adding signed and unsigned integers
  int sum = signedInt + unsignedInt;
  printf("Sum of signed and unsigned integers: %d\n", sum);

  // Subtracting unsigned from signed integer
  int difference = signedInt - unsignedInt;
  printf("Difference between signed and unsigned integers: %d\n", difference);

  return 0;
}
