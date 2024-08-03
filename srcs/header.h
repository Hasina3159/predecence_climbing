#ifndef HEADER_H
# define HEADER_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

#define TOKEN_L_P   1
#define TOKEN_R_P   2
#define TOKEN_OP    3

int	    ft_get_token_type(char **tokens, int i);
int	    ft_get_predecence(char *token);
int	    ft_compute_op(char *operator, int left, int right);
char	*ft_compute_atom(char **tokens, int *i);
int	    ft_compute_expr(char **tokens, int *i, int min_prec);

#endif