#include "3-calc.h"
#include "string.h"
/**
 * main - the main function
 *@argc: number of arguments
 *@argv: array of values of arguments
 *
 *Return:int
 */
int main(int argc, char *argv[])
{
	int f_num, s_num, calc;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	f_num = atoi(argv[1]);
	s_num = atoi(argv[3]);

	if (((*argv[2] != '+') && (*argv[2] != '-') && (*argv[2] != '*') &&
		(*argv[2] != '%') && (*argv[2] != '/')) || (strlen(argv[2]) != 1))
	{
		printf("Error");
		exit(99);
	}
	if ((*argv[3] == 0) && ((*argv[2] == '/') || (*argv[2] == '%')))
	{
		printf("Error");
		exit(100);
	}

	calc = (get_op_func(argv[2]))(f_num, s_num);
		printf("%d\n", calc);
	return (0);
}
