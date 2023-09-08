#include<stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
char letter;
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
