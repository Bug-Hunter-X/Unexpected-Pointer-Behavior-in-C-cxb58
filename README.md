# Unexpected Pointer Behavior in C

This repository demonstrates a simple C program that exhibits unexpected behavior when using pointers. The program modifies a variable's value indirectly through a pointer. While seemingly straightforward, this approach can lead to subtle bugs if not handled correctly.

**Bug:** The primary issue lies in the direct modification of the variable's value through a pointer. While functionally correct in this scenario, such modifications can lead to unexpected consequences in more complex programs, especially when dealing with memory allocation, arrays, or more intricate data structures.

**Solution:** The solution provides an alternative approach to illustrate the use of pointers with caution and awareness of their potential for causing errors. The solution involves demonstrating how to handle and modify the variables more explicitly. 