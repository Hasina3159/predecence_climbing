#include "header.h"

int	main(int argc, char **argv)
{
	char	**tokens;
	int		i;
	int		result;

	if (argc != 2)
		return (0);
	i = 0;
	tokens = ft_split(argv[1], ' ');
	result = ft_compute_expr(tokens, &i, 0);
	printf("Result: %d\n", result);
	return (0);
}
