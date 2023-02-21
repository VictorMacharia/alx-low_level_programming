#include "main.h"
/**
 * print_alphabet_x10 - prints out the alphabet
 *
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
char alphabet;
int num;
num = 0;

while (num < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
num++;
}
}
