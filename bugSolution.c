 #include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;
  // Explicitly using the dereference operator to update the value pointed to by ptr
  *ptr = 20;

  printf("The value of x is: %d\n", x); 

  return 0;
} 