#ifndef EX_02_H
# define EX_02_H

#include <stdlib.h>
#include <stdio.h>

struct listNode
{
	struct listNode	*next;
	int				data;
};

int		*int_arr_join(int const *arr1, int const *arr2, int size);
void	ft_sort_int_tab(int *tab, int size);
void	print_list(struct listNode* head);
void	free_list(struct listNode** head);
void	lst_add(struct listNode** head, struct listNode* new);
struct	listNode *new_node(int new_data);
struct	listNode *new_lkdlist(struct listNode** head, int *arr, int size);
struct	listNode *mergeKLists(struct listNode** lists, int list_size);


#endif
