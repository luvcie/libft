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
* `toupper` Convert character to uppercase.
* `tolower` Convert character to lowercase.
* `atoi` Converts initial portion of string to int.
* `strdup`* Duplicates a string using allocated memory.

### Memory Manipulation Functions

* `memset` Fills memory with a constant byte.
* `bzero` Fills memory with zero bytes.
* `memcpy` Copies memory area.
* `memmove` Copies memory area, handling overlap.
* `memchr` Scans memory for a character.
* `memcmp` Compares memory areas.
* `calloc`* Allocates memory for an array of elements and initializes all bits of the allocated memory to zero.

`*` need malloc()

## Additional functions

* `ft_substr` Allocates and returns a substring from string 's', starting at index 'start' with a maximum length 'len'.
* `ft_strjoin` Allocates and returns a new string, result of the concatenation of 's1' and 's2'.
* `ft_strtrim` Allocates and returns a copy of 's1' with characters from 'set' removed from the beginning and end.
* `ft_split` Allocates and returns an array of strings obtained by splitting 's' using char 'c' as delimiter; array ends with NULL.
* `ft_itoa` Allocates and returns a string representing the integer 'n' received; handles negative numbers.
* `ft_strmapi` Applies function 'f' to each character of 's' (with index) to create a new allocated string.
* `ft_striteri` Applies function 'f' to each character of string 's' (with index), passing the character's address for modification.
* `ft_putchar_fd` Outputs the character 'c' to the given file descriptor 'fd'.
* `ft_putstr_fd` Outputs the string 's' to the given file descriptor 'fd'.
* `ft_putendl_fd` Outputs the string 's' to the given file descriptor 'fd', followed by a newline.
* `ft_putnbr_fd` Outputs the integer 'n' to the given file descriptor 'fd'.
