#ifndef EX_02_H
# define EX_02_H

# include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		roman_to_int(char *number);
int		get_value(char number);
int		multiple_ocurrence(char *number);
int		invalid_sequence(char *number);
int		invalid_pair(char *number);
int		invalid_subtraction(char *number);
int		invalid_modifier(char *number);
int		impossible_modifier(char *number);

#endif
