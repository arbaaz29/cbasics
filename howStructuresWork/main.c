#include <stdio.h>

// Define a structure named 'Person'
struct Person {
  char name[50];
  int age;
  float height;
};

int main() {
  // Declare and initialize a structure variable
  struct Person person1 = {"John Doe", 25, 5.9};

  // Access and print the structure members
  printf("Details of person1:\n");
  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Height: %.2f feet\n", person1.height);

  // Modify a structure member
  person1.age = 26;

  // Display the modified structure
  printf("\nDetails of person1 after modifying age:\n");
  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Height: %.2f feet\n", person1.height);

  return 0;
}
