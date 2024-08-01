#include "header.h"

int	ft_get_predecence(char *operator)
{
	if (ft_strncmp(operator, "+", 1) || ft_strncmp(operator, "-", 1))
		return (1);
	else if (ft_strncmp(operator, "*", 1) || ft_strncmp(operator, "/", 1))
		return (2);
	else
		return (3);
}
