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
for (char = 'a'; letter <= 'f'; letter++)
{
utchar(letter);
}

putchar('\n');

return (0);
}
