#include <stdio.h>

int main() {
  // Declare a variable
  int myVariable = 42;

  // Declare a pointer and assign the address of the variable to it
  int *ptr = &myVariable;

  // Display the address of the variable
  printf("Address of myVariable: %p\n", (void *)&myVariable);

  // Display the value of the variable using the pointer
  printf("Value of myVariable using pointer: %d\n", *ptr);

  // Display the address stored in the pointer
  printf("Address stored in the pointer: %p\n", (void *)ptr);

  return 0;
}
