#include "ex_04.h"

void	print_list(struct listNode *head)
{
	struct listNode	*tmp;

	tmp = head;
	while (tmp)
	{
		printf("%d", tmp->data);
		if (tmp->next)
			printf("->");
		tmp = tmp->next;
	}
	printf("\n");
}

void	free_list(struct listNode **head)
{
	struct listNode	*previous;
	struct listNode	*tmp;

	previous = NULL;
	while (*head)
	{
		tmp = *head;
		while (tmp->next)
		{
			previous = tmp;
			tmp = tmp->next;
		}
		if (previous)
			previous->next = NULL;
		if (tmp == *head)
			*head = NULL;
		free(tmp);
	}
}

void	lst_add(struct listNode **head, struct listNode *new)
{
	struct listNode	*tmp;

	tmp = *head;
	if (!*head)
	{
		*head = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

struct listNode	*new_node(int new_data)
{
	struct listNode	*node;

	node = malloc(sizeof(struct listNode));
	if (!node)
		return (NULL);
	node->data = new_data;
	node->next = NULL;
	return (node);
}

struct listNode	*new_lkdlist(struct listNode **head, int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		lst_add(head, new_node(arr[i]));
		i++;
	}
	return (*head);
}
