

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

VARIADIC FUNCTION

variadic functions accept variable number of arguments.
A variadic function has:
At least one named parameter (fixed argument). Then ... to indicate “more arguments may follow”

    #include <stdarg.h> (required header)
    int sum(int count, ...) ou int	ft_printf(const char *input, ...)

The compiler does not know the types or number of the extra arguments at compile time, so you must provide a way to interpret them (usually via a format string or a count).

    It as 4 key macro (va_list; va_start; va_arg; va_end)
    -> va_list  args
    -> va_start (args, count)
    -> va_arg (args, int)
    -> va_end (args)

EXAMPLE with sum

#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);  // Start at first variable argument
    
    int total = 0;
    for(int i = 0; i < count; i++) {
        total += va_arg(args, int);  // Get next int argument
    }
    
    va_end(args);  // Clean up
    return total;
}

// Usage: sum(3, 10, 20, 30) returns 60 the first argument in this case is the number of arguments that are going to sum up 