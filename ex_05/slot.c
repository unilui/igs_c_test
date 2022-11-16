#include "ex_05.h"

void	free_table(int **table, int lines)
{
	int	i;

	i = 0;
	while (i < lines)
	{
		free(table[i]);
		i++;
	}
	free(table);
}

int	**new_game(int **slot)
{
	int	column;
	int	line;

	if (!slot)
	{
		line = 0;
		slot = malloc(sizeof(int *) * LINES);
		while (line < LINES)
			slot[line++] = malloc(sizeof(int) * COLUMNS);
	}
	line = 0;
	column = 0;
	while (line < LINES)
	{
		printf("Insira os valores da linha %d:\n", (line + 1));
		while (column < COLUMNS)
			scanf("%d", &slot[line][column++]);
		column = 0;
		line++;
	}
	return (slot);
}

int	check_result(int **slot, int prize[LINES][COLUMNS])
{
	int	count_prize;
	int	column_i;
	int	line_i;
	int	comp;

	line_i = 0;
	column_i = 0;
	count_prize = 0;
	comp = slot[0][0];
	while (line_i < LINES)
	{
		while (column_i < COLUMNS)
		{
			if (comp == slot[line_i][column_i]
				&& prize[line_i][column_i])
				count_prize++;
			column_i++;
		}
		column_i = 0;
		line_i++;
	}
	return (count_prize == POINTS);
}

int	main(void)
{
	int	prize[LINES][COLUMNS] = {{1,0,0,0,1}, {0,1,0,1,0}, {0,0,1,0,0}};
	int	**slot;

	slot = NULL;
	while (TRUE)
	{
		slot = new_game(slot);
		if (check_result(slot, prize) == WIN)
		{
			free_table(slot, LINES);
			printf("Ganhou!\n");
			break;
		}
	}
	return (0);
}
