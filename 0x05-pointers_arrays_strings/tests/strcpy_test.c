#include <stdio.h>
#include <string.h>

/**
 * main - strcpy tests
 *
 * Return: void
 */
int main(void)
{
    char src[2] = "He";
    char dest[20];

    strcpy(dest, src);
    printf("dest = %s\n", dest);
    return (0);
}