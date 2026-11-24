*This project has been created as part of the 42 curriculum by maramos.*

Libft - My first C library


Description

Libft is the very first project of the 42 curriculum. The idea is simple: recode a set of standard C library functions from scratch, along with a few extra utilities for strings, memory, file descriptors, and linked lists, and pack them into a static library (libft.a).
Since most standard C functions are forbidden in future 42 projects, building a solid and reliable libft early on is essential—it becomes the personal toolbox I will reuse and expand throughout the curriculum.

What's inside


1. Libc Functions

Recoded versions of standard libc functions, matching their original prototypes and edge-case behaviors:
• Characters: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower
• Strings: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup
• Memory: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc
• Conversion: ft_atoi

2. Additional Functions

Extra helper functions that don't exist in the standard libc (or work differently):
• Strings:
	• ft_substr — Extracts a substring from a string.
	• ft_strjoin — Joins two strings together into a newly allocated one.
	• ft_strtrim — Trims a given set of characters from the start and end of a string.
	• ft_split — Splits a string into an array of words using a delimiter character.
	• ft_itoa — Converts an int into a newly allocated string.
	• ft_strmapi — Creates a new string by applying a function to each character.
	• ft_striteri — Applies a function directly to each character of a string in place.
• File Descriptors:
	• ft_putchar_fd — Writes a character to a file descriptor.
	• ft_putstr_fd — Writes a string to a file descriptor.
	• ft_putendl_fd — Writes a string followed by a newline to a file descriptor.
	• ft_putnbr_fd — Writes a number to a file descriptor.
• Functions to create and manipulate singly linked lists using the t_list struct:
	• ft_lstnew — Allocates and returns a new node.
	• ft_lstadd_front — Adds a node at the start of the list.
	• ft_lstsize — Counts how many nodes are in the list.
	• ft_lstlast — Returns the last node of the list.
	• ft_lstadd_back — Adds a node at the end of the list.
	• ft_lstdelone — Frees a single node's content and the node itself.
	• ft_lstclear — Deletes and frees a node and all the ones after it.
	• ft_lstiter — Loops through the list and applies a function to each node's content.
	• ft_lstmap — Loops through the list, applies a function, and builds a new list from the results.

Instructions


Compilation

Clone the repository and run make to build libft.a:

git clone <git@github.com:42learners/Common-Core---Libft-bf794236-857c-4d4e-8dab-0bce4b2cafb0.git> 
cd libft
make

Makefile rules


Command	What it does
make / make all	Compiles the mandatory part into libft.a.
make clean	Deletes all .o object files.
make fclean	Deletes .o files and libft.a.
make re	Recompiles everything from scratch (fclean + all).


Usage

Include "libft.h" in your .c file and pass libft.a when compiling:

#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}

bash
cc -Wall -Wextra -Werror main.c libft.a -o program

Resources

• man pages: My main reference to understand exact return values, pointer casts, and edge cases (man strlen, man memmove, man strlcat, etc.).
• 42 Norminette: Used to keep the code compliant with 42's coding standard.
• Peer-to-peer & testers: Discussing edge cases with peers at campus and running tests with 42-cli, Tripouille's libftTester, and valgrind to catch memory leaks or segfaults.

AI Usage

I used AI as a rubber duck and code reviewer while working on this project—mostly to double-check tricky edge cases (like empty strings, NULL inputs, or buffer overlaps in memmove), understand why certain bugs happened in functions like ft_split or ft_strtrim, and help clean up the layout of this README.
