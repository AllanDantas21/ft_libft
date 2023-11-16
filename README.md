# Libft

Libft is a project for Standard C library override functions that should be done from the ground up, and must behave the same as the originals

* **First part:** re-code a set of the libc functions, as defined in their man, with the same prototype and behaviors as the originals.
* **Second part:** code a set of functions that are either not included in the libc, or included in a different form.
* **Bonus part:** code functions to manipulate lists.
* **Extras:** add any function to the libft as I see fit.

## Table of Contents

* [Part 01](#part-01)
* [Part 02](#part-02)
* [Bonus Functions](#bonus-functions)
* [Make](#make)


### Part 01

| Function | Description |
| --- | --- |
| [**ft\_isalpha**](ft_isalpha.c) |checks for an alphabetic character.|
| [**ft\_isdigit**](ft_isdigit.c) | checks for a digit (0 through 9).|
| [**ft\_isalnum**](ft_isalnum.c) | checks for an alphanumeric character; it  is  equivalent  to (isalpha(c) || isdigit(c)).|
| [**ft\_isascii**](ft_isascii.c) | checks  whether  c  is a 7-bit unsigned char value that fits into the ASCII character set. |
| [**ft\_isprint**](ft_isprint.c) | checks for any printable character including space.|
| [**ft\_toupper**](ft_toupper.c) | convert lowercase letters to uppercase|
| [**ft\_tolower**](ft_tolower.c) | convert uppercase letters to lowercase. |
| [**ft\_memset**](ft_memset.c) | fills the first n bytes of the memory area pointed to by s with the constant byte c|
| [**ft\_bzero**](ft_bzero.c) | erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.|
| [**ft\_memcpy**](ft_memcpy.c) | copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use  memmove(3)  if the memory areas do overlap.
| [**ft\_striteri**](ft_striteri.c) |Applies the function ’f’ on each character ofthe string passed as argument, passing its index as first argument.|
| [**ft\_memmove**](ft_memmove.c) | copies n bytes from memory area src to memory area dest. The two strings may overlap; the copy is always done in a non-destructive manner.|
| [**ft\_memchr**](ft_memchr.c) |scans the initial n bytes of the memory area pointed to by s for the first instance of c.|
| [**ft\_memcmp**](ft_memcmp.c) | function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.|
| [**ft\_strlen**](ft_strlen.c) | The ft\_strlen() function computes and returns the length of the string s.|
| [**ft\_strlcpy**](/ft_strlcpy.c) | copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|
| [**ft\_strlcat**](ft_strlcat.c) |  appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.|
| [**ft\_strchr**](ft_strchr.c) | returns a pointer to the first occurrence of the character c in the string s.|
| [**ft\_strrchr**](ft_strrchr.c) | returns a pointer to the last occurrence  of the character c in the string s.|
| [**ft\_strnstr**](ft_strnstr.c) | locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.|
| [**ft\_strncmp**](ft_strncmp.c) | lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_strdup**](ft_strdup.c) | returns a pointer to a new string which is a duplicate  of  the string s.|
| [**ft\_atoi**](ft_atoi.c) | converts the initial portion of the string pointed to by str to int representation and returns the int. |
| [**ft\_calloc**](ft_calloc.c) |  allocates memory for an array of  nmemb  elements  of  size  bytes  each and returns a pointer to the allocated memory. The memory is set to zero.|

### Part 02

| Function | Description |
| --- | --- |
| [**ft\_substr**](ft_substr.c) | Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
| [**ft\_strjoin**](ft_strjoin.c) | Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
| [**ft\_strtrim**](ft_strtrim.c) | Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
| [**ft\_split**](ft_split.c) | Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.|
| [**ft\_strmapi**](ft_strmapi.c) | Applies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’.|
| [**ft\_itoa**](ft_itoa.c) | Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.|
| [**ft\_putchar\_fd**](ft_putchar_fd.c) | Outputs the character ’c’ to the given file descriptor.|
| [**ft\_putstr\_fd**](ft_putstr_fd.c) | Outputs the string ’s’ to the given file descriptor.|
| [**ft\_putendl\_fd**](ft_putendl_fd.c) | Outputs the string ’s’ to the given file descriptor, followed by a newline.|
| [**ft\_putnbr\_fd**](ft_putnbr_fd.c) | Outputs the integer ’n’ to the given file descriptor.|

### Bonus Functions

| Function | Description |
| --- | --- |
| [**ft\_lstnew**](ft_lstnew.c) | Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.|
| [**ft\_lstadd_front**](ft_lstadd_front.c) | Adds the element ’new’ at the beginning of the list.|
| [**ft\_lstsize**](ft_lstsize.c) | Counts the number of elements in a list.|
| [**ft\_lstlast**](ft_lstlast.c) | Returns the last element of the list.|
| [**ft\_lstadd_back**](ft_lstadd_back.c) | Adds the element ’new’ at the end of the list.|
| [**ft\_lstdelone**](ft_lstdelone.c) | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.|
| [**ft\_lstclear**](ft_lstclear.c) | Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list is set to NULL.|
| [**ft\_lstiter**](ft_lstiter.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element.|
| [**ft\_lstmap**](ft_lstmap.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.|
