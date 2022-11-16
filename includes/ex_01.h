#ifndef EX_01_H
# define EX_01_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	**load_file(char *file);
char	**ft_split(char const *str, char sep);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
int		is_palindrome(char *str, int start, int end);
char	*search_palindrome(char	*str);
void	search_all_palindromes(char **file);

#endif
