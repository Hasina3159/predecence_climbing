#include "header.h"

char	*ft_compute_atom(char **tokens, int *i)
{
	int int_result;
	char *result_str;
	char *result;

	if (!tokens[*i])
	{
		printf("source ended unexpectedly!\n");
		return (NULL);
	}
	else if (ft_get_token_type(tokens, *i) == TOKEN_L_P)
	{
		*i = *i + 1;
		int_result = ft_compute_expr(tokens, i, 0);
		if (ft_get_token_type(tokens, *i) != TOKEN_R_P)
		{
			printf("expected closing parenthesis\n");
			return (NULL);
		}
		*i = *i + 1;
		result_str = ft_itoa(int_result);
		return (result_str);
	}
	else if (ft_get_token_type(tokens, *i) == TOKEN_OP
		|| ft_get_token_type(tokens, *i) == TOKEN_L_P
		|| ft_get_token_type(tokens, *i) == TOKEN_R_P)
	{
		printf("expected an atom, not an operator : \"%s\"\n", tokens[*i]);
		return (NULL);
	}
	result = tokens[*i];
	*i = *i + 1;
	return (result);
}
