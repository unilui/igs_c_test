#include "ex_03.h"

void	print_steps(char *start, char *end, int steps)
{
	t_rgb	start_color;
	t_rgb	end_color;
	int		increase;
	int		i;

	i = 0;
	start_color.color = ft_hexatoi(start);
	end_color.color = ft_hexatoi(end);
	increase = (end_color.rgb[2] - start_color.rgb[2]) / steps;
	increase = ft_abs(increase);
	if (steps > 255)
		steps = 255;
	if (start_color.color > end_color.color)
	{
		while (i < steps)
		{
			if ((start_color.rgb[2] - increase) < 0)
				start_color.rgb[2] = 0;
			else
				start_color.rgb[2] -= increase;
			printf("0x%06X\n", start_color.color);
			i++;
		}
	}
	else
	{
		while (i < steps)
		{
			if ((start_color.rgb[2] + increase) > 255)
				start_color.rgb[2] = 255;
			else
				start_color.rgb[2] += increase;
			printf("0x%06X\n", start_color.color);
			i++;
		}
	}
}
