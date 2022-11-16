#include "ex_03.h"

int	check_letters(char *start, char *end)
{
	int	i;

	i = 2;
	while (start[i])
	{
		if ((start[i] < 'A' || start[i] > 'F')
			&& (start[i] < '0' || start[i] > '9'))
			return (0);
		i++;
	}
	i = 2;
	while (end[i])
	{
		if ((end[i] < 'A' || end[i] > 'F')
			&& (end[i] < '0' || end[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

int	check_prefix(char *start, char *end)
{
	if (start[0] != '0' || start[1] != 'x')
		return (0);
	if (end[0] != '0' || end[1] != 'x')
		return (0);
	return (1);
}

int	validate_input(char *start, char *end)
{
	int	start_len;
	int	end_len;

	start_len = ft_strlen(start);
	end_len = ft_strlen(end);
	if (start_len != 8 || end_len != 8)
		return (0);
	if (!check_letters(start, end))
		return (0);
	if (!check_prefix(start, end))
		return (0);
	return (1);
}
