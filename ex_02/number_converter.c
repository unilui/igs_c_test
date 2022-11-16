#include "ex_02.h"

int	validate_input(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (!get_value(number[i]))
			return (0);
		i++;
	}
	return (1);
}

int	validate_structure(char *number)
{
	if (multiple_ocurrence(number)
		|| invalid_sequence(number)
		|| invalid_pair(number)
		|| invalid_subtraction(number)
		|| invalid_modifier(number)
		|| impossible_modifier(number))
		return (0);
	return (1);
}

void	help(void)
{
	printf("Invalid input :/\n");
	printf("Valid characters: I | V | X | L | C | D | M\n");
}

int	main(void)
{
	char	number[15];

	printf("Enter a roman number: \n-> ");
	scanf("%s", number);
	if (validate_input(number) && validate_structure(number))
		printf("%s = %d\n", number, roman_to_int(number));
	else
	{
		help();
		return (1);
	}
	return (0);
}
