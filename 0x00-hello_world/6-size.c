#include <stdio.h>
/**
 * main - Entry
 *
 * Return: always 0(success)
 */
int main(void)
{
	printf("char size:%ld byte(s)\n", sizeof(char));
	printf("int size:%ld byte(s)\n", sizeof(int));
	printf("long int size:%ld byte(s)\n", sizeof(long int));
	printf("long long int size:%ld byte(s)\n", sizeof(long long int));
	printf("fkoat size:%ld byte(s)\n", sizeof(float));
	return (0);
}
