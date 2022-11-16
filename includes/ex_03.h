#ifndef EX_03_H
# define EX_03_H

# include <stdio.h>

typedef union u_color
{
	unsigned		color;
	unsigned char	rgb[4];
}	t_rgb;

size_t	ft_strlen(const char *s);
int		ft_abs(int nbr);
int		ft_hexatoi(const char *nptr);
int		check_letters(char *start, char *end);
int		check_prefix(char *start, char *end);
int		validate_input(char *start, char *end);
void	print_steps(char *start, char *end, int steps);

#endif
