#include "header.h"

int	ft_get_predecence(char *token)
{
	if (token[0] == '+' || token[0] == '-')
		return (1);
	if (token[0] == '*' || token[0] == '/')
		return (2);
	return (0);
}
