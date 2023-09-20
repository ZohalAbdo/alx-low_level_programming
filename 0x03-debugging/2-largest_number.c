#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @X: first integer
* @Y: second integer
* @Z: third integer
* Return: largest number
*/
int largest_number(int X, int Y, int Z)
{
int largest;
if (X > Y && X > Z)
{
largest = X;
}
else if (X > Y && Z > X)
{
largest = Z;
}
else if (Y > Z)
{
largest = Y;
}
else
{
largest = Z;
}
return (largest);
}

