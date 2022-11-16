#include "ex_04.h"

int	*int_arr_join(int const *arr1, int const *arr2, int size)
{
	int		*arr;
	int		i;
	int		x;

	if ((!arr1 && !arr2) || (size == 0 && arr1))
		return (NULL);
	arr = malloc((size + 1) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	x = 0;
	if (arr1)
	{
		while (i < size)
			arr[x++] = arr1[i++];
	}
	if (arr2)
		arr[x] = arr2[0];
	return (arr);
}
