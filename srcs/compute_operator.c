#include "header.h"

int	ft_compute_op(char *operator, int left, int right)
{
	if (*operator == '+')
		return (left + right);
	else if (*operator == '-')
		return (left - right);
	else if (*operator == '*')
		return (left * right);
	else if (*operator == '/')
		return (left / right);
	else
    {
		printf("unknown operator: %s\n", operator);
		exit(1);
	}
}
