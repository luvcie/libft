# Libft
Reimplementing specific libc functions and creating custom C functions for string, memory, and linked list manipulation.

## Functions from libc

### String Manipulation Functions

* `isalpha` Checks for an alphabetic character.
* `isdigit` Checks for a digit (0 through 9).
* `isalnum` Checks for an alphanumeric character.
* `isascii` Checks whether c fits into the ASCII character set.
* `isprint` Checks for any printable character except space.
* `strlen`  Calculates the length of a string excluding '\0'.
* `strchr`  Returns a pointer to the first occurrence of the character c in the string s.
* `strrchr` Returns a pointer to the last occurrence of the character c in the string s.
* `strncmp` Compares the first n bytes of two strings and returns an integer indicating the result of the comparison. 
* `strnstr` Locates a substring in the first n bytes of a string.
* `strlcpy` 
* `strlcat`
* `atoi`
* `strdup`*

### Memory Manipulation Functions

* `memset`
* `bzero`
* `memcpy`
* `memmove`
* `memchr`
* `memcmp`
* `calloc`*

`*` need malloc()
