#include "ex_04.h"

struct listNode	*mergeKLists(struct listNode **lists, int list_size)
{
	struct listNode	*tmp;
	struct listNode	*new_list;
	int				*new_arr;
	int				*tmp_arr;
	int				counter;
	int				i;

	i = 0;
	counter = 0;
	new_arr = NULL;
	new_list = NULL;
	while (i < list_size)
	{
		tmp = lists[i];
		while (tmp)
		{
			tmp_arr = new_arr;
			new_arr = int_arr_join(new_arr, &tmp->data, counter);
			if (tmp_arr)
				free(tmp_arr);
			tmp = tmp->next;
			counter++;
		}
		i++;
	}
	if (new_arr)
	{
		ft_sort_int_tab(new_arr, counter);
		new_lkdlist(&new_list, new_arr, counter);
		free(new_arr);
		return (new_list);
	}
	return (NULL);
}
