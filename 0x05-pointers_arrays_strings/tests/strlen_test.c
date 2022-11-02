#include <stdio.h>
#include <string.h>

/**
 * main - test the strlen function
 *
 * return: 0 (Success)
 */
int main(void)
{
	char str1[] = "Hello";
	char str2[] = {'W', 'O', 'r', 'l', 'd', '\0'};
	char *str3 = "Eyob";
	char str4[] = {'H', 'i'};
	char str5[] = {'\0'};

	printf("strlen of str1 = %lu\n", strlen(str1));
	printf("strlen of str2 = %lu\n", strlen(str2));
	printf("strlen of str3 = %lu\n", strlen(str3));
	printf("strlen of str4 = %lu\n", strlen(str4));
	printf("strlen of str5 = %lu\n", strlen(str5));

	return (0);
}
