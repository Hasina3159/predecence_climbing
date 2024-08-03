#include "header.h"

int	ft_compute_expr(char **tokens, int *i, int min_prec)
{
	char	*current_token;
	int		left_val;
	int		prec;
	int		right_val;

	left_val = ft_atoi(ft_compute_atom(tokens, i));
	while (tokens[*i] && ft_get_token_type(tokens, *i) == TOKEN_OP
		&& ft_get_predecence(tokens[*i]) >= min_prec)
	{
		current_token = tokens[*i];
		prec = ft_get_predecence(current_token);
		*i = *i + 1;
		right_val = ft_compute_expr(tokens, i, prec + 1);
		left_val = ft_compute_op(current_token, left_val, right_val);
	}
	return (left_val);
}
