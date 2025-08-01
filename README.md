_printf(3) Linux Programmer's Manual _printf(3)

NAME
_printf - formatted output conversion

SYNOPSIS
#include "main.h"

   **int _printf(const char \***_format_**, ...);**

DESCRIPTION
The _printf() function produces output according to a format string.
This function writes its output to the standard output stream, stdout.

   The format string is a character string that is composed of zero or more
   directives. Directives can be ordinary characters (not **%**), which are
   copied unchanged to the output, or conversion specifications, each of
   which results in fetching zero or more subsequent arguments. Each
   conversion specification is introduced by the character **%**.

FORMAT OF THE FORMAT STRING
The format string is processed from left to right. When the first %
character is encountered, the character immediately following it is
examined to determine the conversion to be performed.

Supported Conversion Specifiers
The following conversion specifiers are supported:

   **c**      The `int` argument is converted to an `unsigned char`, and the
            resulting character is written.

   **s**      The `const char *` argument is expected to be a pointer to a
            character string. Characters from the string are written up to (but not including) the terminating null byte ('\0'). If the pointer isNULL, the string(null)` is printed.

   **d**, **i**  The `int` argument is converted to a signed decimal integer.

   **%**      A literal **%** character is written to the output. No
            argument is converted. The complete conversion specification
            is '%%'.

Unsupported Features
This version of _printf() does not support the following features found
in the standard C library printf(3):

   *   Flag characters (such as `+`, ` `, `#`, `0`, or `-`)
   *   Field width specifications (e.g., `%10d`)
   *   Precision specifications (e.g., `%.5s`)
   *   Length modifiers (such as `h`, `l`, or `ll`)

RETURN VALUE
Upon successful return, _printf() returns the number of characters
printed (excluding the null byte used to end output to strings).

   If the format string is `NULL`, the function returns -1. If an invalid
   format specifier is encountered immediately after a **'%'**, the function
   will print the **'%'** and the invalid character, and continue processing
   the rest of the format string.

EXAMPLES
To print a simple string and a character:
_printf("Hello, %s! Your initial is %c.\n", "User", 'A');

   Output:
       `Hello, User! Your initial is A.`

   To print an integer and a decimal:
       `_printf("You have %d items. The value is %i.\n", 15, -42);`

   Output:
       `You have 15 items. The value is -42.`

   To print a literal percentage sign:
       `_printf("Success rate: 100%%\n");`

   Output:
       `Success rate: 100%`

AUTHORS
This manual page was created based on a custom implementation of the
printf function.

SEE ALSO
printf(3)
