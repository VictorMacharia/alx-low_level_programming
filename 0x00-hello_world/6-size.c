#include <stdio.h>
/**
 * main - Entry
 *
 * Return: always 0(success)
 */
int main (void)
{
	printf("int size:%ld byte(s)\n", sizeof(int));
	printf("long int:%ld byte(s)\n", sizeof(long int));
	printf("float size:%ld byte(s)\n", sizeof(float));
	printf("char size:%ld byte(s)\n", sizeof(char));
	printf("long long int:%ld byte(s)\n", sizeof(long long int));
	return (0);
}
