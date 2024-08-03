#include "header.h"

int	ft_get_token_type(char **tokens, int i)
{
	if (tokens[i][0] == '(')
		return (TOKEN_L_P);
	if (tokens[i][0] == ')')
		return (TOKEN_R_P);
	if (tokens[i][0] == '+' || tokens[i][0] == '-' || tokens[i][0] == '*'
		|| tokens[i][0] == '/')
		return (TOKEN_OP);
	return (0);
}
