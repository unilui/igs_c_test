#include "ex_01.h"

void	free_table(char **table)
{
	char	**tmp;

	tmp = table;
	while (*table)
		free(*table++);
	free(tmp);
}

int	validate_args(int argc)
{
	if (argc != 2)
	{
		printf("Usage: palindrom <your_file.txt>\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	**file;

	if (!validate_args(argc))
		return (1);
	file = load_file(argv[1]);
	if (!file)
		return (2);
	search_all_palindromes(file);
	free_table(file);
	return (0);
}
