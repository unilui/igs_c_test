#include "ex_04.h"

int	main(void)
{
	struct listNode	*arr[3];
	struct listNode	*merged_list;

	arr[0] = new_node(1);
	arr[0]->next = new_node(3);
	arr[0]->next->next = new_node(5);
	arr[0]->next->next->next = new_node(7);
	printf("Generated linked list: ");
	print_list(arr[0]);

	arr[1] = new_node(2);
	arr[1]->next = new_node(4);
	arr[1]->next->next = new_node(6);
	arr[1]->next->next->next = new_node(8);
	printf("Generated linked list: ");
	print_list(arr[1]);

	arr[2] = new_node(0);
	arr[2]->next = new_node(9);
	arr[2]->next->next = new_node(10);
	arr[2]->next->next->next = new_node(11);
	printf("Generated linked list: ");
	print_list(arr[2]);

	merged_list = mergeKLists(arr, 3);
	printf("Merged linked list: ");
	print_list(merged_list);
	free_list(&arr[0]);
	free_list(&arr[1]);
	free_list(&arr[2]);
	free_list(&merged_list);
	return (0);
}
