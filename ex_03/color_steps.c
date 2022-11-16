#include "ex_03.h"

void	get_data(char start[9], char end[9], int *steps)
{
	printf("Initial color: ");
	scanf("%s", start);
	printf("End color: ");
	scanf("%s", end);
	printf("Steps: ");
	scanf("%d", steps);
}

void	help(void)
{
	printf("Invalid input :/\n");
	printf("You can try:\n");
	printf("Initial color : 0x00001A\n");
	printf("End color = 0xFF001A\n");
	printf("Steps : 3\n");
}

int	main(void)
{
	char		start[9];
	char		end[9];
	int			steps;

	get_data(start, end, &steps);
	if (validate_input(start, end) && steps > 0)
		print_steps(start, end, steps);
	else
	{
		help();
		return (1);
	}
	return (0);
}
