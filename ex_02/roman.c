#include "ex_02.h"

int	roman_to_int(char *number)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (number[i])
	{
		if (get_value(number[i]) && number[i + 1]
			&& (get_value(number[i]) < get_value(number[i + 1])))
			result -= get_value(number[i]);
		else
			result += get_value(number[i]);
		i++;
	}
	return (result);
}

int	get_value(char number)
{
	if (number == 'I')
		return (1);
	else if (number == 'V')
		return (5);
	else if (number == 'X')
		return (10);
	else if (number == 'L')
		return (50);
	else if (number == 'C')
		return (100);
	else if (number == 'D')
		return (500);
	else if (number == 'M')
		return (1000);
	return (0);
}
