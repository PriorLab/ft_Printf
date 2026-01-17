*This project has been created as part of the 42 curriculum by alemigue.*

# ft_printf

## Description
**ft_printf** is a reimplementation of the C standard library function `printf`.  
The goal of this project is to understand formatted output by building a custom function capable of parsing a format string and printing formatted data using variadic arguments.

---

## Instructions

### Compilation
```bash
make
This generates the static library libftprintf.a.

Usage
c
Copy code
#include "ft_printf.h"

ft_printf("Value: %d\n", 42);
Compile with:

bash
Copy code
gcc main.c libftprintf.a
Algorithm and Data Structures
The implementation iterates through the format string character by character.
When a % is encountered, the next character is analyzed to determine the conversion type.

A va_list is used to retrieve variadic arguments.
Each format specifier (%c, %s, %d, %i, %u, %x, %X, %p, %%) is handled by a dedicated function, ensuring modularity and readability.

No complex data structures are used; the project relies on pointers, counters, and helper functions to convert values before printing.

Resources
man 3 printf

https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf/variadic-functions


AI usage:
AI tools (ChatGPT) were used to clarify edge cases and expected behavior of certain format specifiers. All code, logic, and implementation decisions were written manually by the author.
