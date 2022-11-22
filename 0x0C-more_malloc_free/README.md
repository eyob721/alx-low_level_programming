# 0x0C. C - More malloc, free

## Mandatory

-   0-malloc_checked.c
    -   a function that allocates a memory using malloc. The function takes size of the memory as an argument and returns a void pointer to the allocated memory. If malloc fails it exits with exit status 98.
-   1-string_nconcat.c
    -   a function that concatenates two strings. The function takes as an argument two strings and number of bytes (n) as an integer. The function concatenates the first n bytes from the second string to the first string. If n is greater than the length of the second string, it concatenates the whole second string to the first string, it doesn't go beyond that.
-   2-calloc.c
    -   a function that allocates memory for an array, using malloc. Similar to the function calloc.
-   3-array_range.c
    -   a function that creates an array of integers. The function takes two integers as arguments (min and max integers) and returns a pointer to the array. The array contains values all integers starting from min(included) to max(included), and ordered from min to max.

## Advanced

-   100-realloc.c
    -   a function that reallocates a memory block using malloc and free. The function takes a pointer to the memory block, old size of the memory block, and the new size of the reallocated memory as an argument.
-   The function returns a pointer to the reallocated memory. Similar to the function realloc.
