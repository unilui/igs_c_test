#include "ex_03.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (*s++)
			i++;
	}
	return (i);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	ft_hexatoi(const char *nptr)
{
	int	num;

	num = 0;
	while (*nptr == '0' || *nptr == 'x')
		nptr++;
	while ((*nptr >= '0' && *nptr <= '9')
		|| (*nptr >= 'a' && *nptr <= 'f')
		|| (*nptr >= 'A' && *nptr <= 'F'))
	{
		num = num * 16;
		if (*nptr >= '0' && *nptr <= '9')
			num += *nptr - '0';
		if (*nptr >= 'a' && *nptr <= 'f')
			num += *nptr - 87;
		if (*nptr >= 'A' && *nptr <= 'F')
			num += *nptr - 55;
		nptr++;
	}
	return (num);
}
