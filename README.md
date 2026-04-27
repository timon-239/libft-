This project has been created as part of the 42 curriculum by tireis.

Description
The Libft project is the first milestone of the 42 curriculum. The goal is to recreate a set of standard C library functions, along with additional utility functions that will be used in future 42 projects.

By building this library from scratch, I gained a deep understanding of:

Memory management in C (malloc, free, memset).

String manipulation and buffer handling.

The internal workings of standard functions (e.g., atoi, strlen, strnstr).

Managing linked lists using custom struct definitions.

This library acts as a personal toolkit, which I will continue to expand throughout the program.

Instructions
Compilation

The project includes a Makefile that compiles all source files into a libft.a static library.

To compile the mandatory and bonus functions:

Bash
make bonus
To remove object files:

Bash
make clean
To remove all generated files (objects and library):

Bash
make fclean
Usage

To use this library in your own C project, include the header file and link the compiled library:

Include the header in your code:

C
#include "libft.h"
Compile your program with the library:

Bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
Resources

Documentation & References

The C Programming Language (K&R): The "Bible" of C for syntax and standard library logic.

Linux Man Pages: Used extensively to verify the exact behavior and edge cases of original libc functions.

Peer Collaboration

Peer Learning: Collaborated with fellow students at 42 to discuss the logic of complex functions. Peers helped me grasp the conceptual difference between memmove and memcpy, especially regarding overlapping memory areas.

Peer-to-Peer Evaluation: Participated in mock evaluations where we reviewed each other's code to find edge cases and improve the robustness of our Makefile and libft.h structure.

Use of AI

I used Gemini (AI) as an adaptive learning collaborator during this project. Here is how it was utilized:

Logic Visualization: Used AI to generate analogies (like the "Scavenger Hunt" for Linked Lists) to better understand pointer arithmetic and struct navigation.

Debugging Peer: When facing Segmentation Faults in ft_lstmap and ft_lstclear, I used AI to explain the "Dangling Pointer" problem and the necessity of temporary variables.

Conceptual Guidance: AI helped clarify the difference between single (*) and double pointers (**) when modifying the head of a list.
