#include "ex_02.h"

int	multiple_ocurrence(char *number)
{
	if (ft_strchr(number, 'L') != ft_strrchr(number, 'L'))
		return (1);
	else if (ft_strchr(number, 'D') != ft_strrchr(number, 'D'))
		return (1);
	else if (ft_strchr(number, 'V') != ft_strrchr(number, 'V'))
		return (1);
	return (0);
}

int	invalid_sequence(char *number)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (number[i])
	{
		if (i > 0 && number[i] == number[i - 1])
			x++;
		else
			x = 1;
		if (x == 4)
			return (1);
		i++;
	}
	return (0);
}

int	invalid_pair(char *number)
{
	int	len;

	len = ft_strlen(number);
	if (ft_strnstr(number, "IL", len)
		|| ft_strnstr(number, "IC", len)
		|| ft_strnstr(number, "ID", len)
		|| ft_strnstr(number, "IM", len)
		|| ft_strnstr(number, "XD", len)
		|| ft_strnstr(number, "XM", len)
		|| ft_strnstr(number, "VX", len)
		|| ft_strnstr(number, "VL", len)
		|| ft_strnstr(number, "VC", len)
		|| ft_strnstr(number, "VD", len)
		|| ft_strnstr(number, "VM", len)
		|| ft_strnstr(number, "LC", len)
		|| ft_strnstr(number, "LD", len)
		|| ft_strnstr(number, "LM", len)
		|| ft_strnstr(number, "DM", len))
		return (1);
	return (0);
}

int	invalid_subtraction(char *number)
{
	char	*tmp;
	int		len;

	len = ft_strlen(number);
	tmp = ft_strnstr(number, "IX", len);
	if (tmp && (ft_strchr(tmp + 2, 'X') || ft_strchr(tmp + 2, 'V')))
		return (1);
	tmp = ft_strnstr(number, "XC", len);
	if (tmp && (ft_strchr(tmp + 2, 'C') || ft_strchr(tmp + 2, 'L')))
		return (1);
	tmp = ft_strnstr(number, "CM", len);
	if (tmp && (ft_strchr(tmp + 2, 'M') || ft_strchr(tmp + 2, 'D')))
		return (1);
	return (0);
}

int	invalid_modifier(char *number)
{
	char	*tmp;
	int		len;

	len = ft_strlen(number);
	tmp = ft_strnstr(number, "CD", len);
	if (tmp && ft_strchr(tmp + 2, 'C'))
		return (1);
	tmp = ft_strnstr(number, "CM", len);
	if (tmp && ft_strchr(tmp + 2, 'C'))
		return (1);
	tmp = ft_strnstr(number, "XL", len);
	if (tmp && ft_strchr(tmp + 2, 'X'))
		return (1);
	tmp = ft_strnstr(number, "XC", len);
	if (tmp && ft_strchr(tmp + 2, 'X'))
		return (1);
	tmp = ft_strnstr(number, "IV", len);
	if (tmp && ft_strchr(tmp + 2, 'I'))
		return (1);
	tmp = ft_strnstr(number, "IX", len);
	if (tmp && ft_strchr(tmp + 2, 'I'))
		return (1);
	return (0);
}

int	impossible_modifier(char *number)
{
	char	*tmp;
	int		len;

	len = ft_strlen(number);
	tmp = ft_strchr(number, 'I');
	if (tmp && (ft_strnstr(tmp + 1, "IV", len - 1)
			|| ft_strnstr(tmp + 1, "IX", len - 1)))
		return (1);
	tmp = ft_strchr(number, 'V');
	if (tmp && (ft_strnstr(tmp + 1, "IV", len - 1)
			|| ft_strnstr(tmp + 1, "IX", len - 1)))
		return (1);
	tmp = ft_strchr(number, 'X');
	if (tmp && (ft_strnstr(tmp + 1, "XL", len - 1)
			|| ft_strnstr(tmp + 1, "XC", len - 1)))
		return (1);
	tmp = ft_strchr(number, 'L');
	if (tmp && (ft_strnstr(tmp + 1, "XL", len - 1)
			|| ft_strnstr(tmp + 1, "XC", len - 1)))
		return (1);
	tmp = ft_strchr(number, 'C');
	if (tmp && (ft_strnstr(tmp + 1, "CD", len - 1)
			|| ft_strnstr(tmp + 1, "CM", len - 1)))
		return (1);
	tmp = ft_strchr(number, 'D');
	if (tmp && (ft_strnstr(tmp + 1, "CD", len - 1)
			|| ft_strnstr(tmp + 1, "CM", len - 1)))
		return (1);
	return (0);
}
