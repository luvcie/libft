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
* `strlcpy` Safely copies the NUL-terminated string src to the buffer dst (up to size bytes), guarantees NUL-termination (if size > 0), and returns the total length of src. 
* `strlcat` Safely appends the NUL-terminated string src to the end of dst (within size total bytes for dst), guarantees NUL-termination (if space exists), and returns the combined length of the original dst plus the length of src.
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
