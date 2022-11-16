#include "ex_04.h"

static void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == size - 1)
		{
			if (tab[i] < tab[i - i])
			{
				ft_swap(&tab[i], &tab[i - i]);
				i = 0;
				continue ;
			}
		}
		else
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
				continue ;
			}
		}
		i++;
	}
}
