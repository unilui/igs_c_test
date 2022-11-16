#include "ex_01.h"

int	is_palindrome(char *str, int start, int end)
{
	if (str[start] == str[end] && (end - start) == 1)
		return (1);
	while (start < end)
	{
		if (str[start] != str[end])
			return (0);
		start++;
		end--;
	}
	return (1);
}

char	*search_palindrome(char	*str)
{
	char	*palindrome;
	char	*palindrome_end;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(str) - 1;
	palindrome = NULL;
	palindrome_end = NULL;
	while (str[start])
	{
		i = end;
		while (start < i)
		{
			if (is_palindrome(str, start, i)
				&& (palindrome_end - palindrome)
				< ((str + i) - (str + start)))
			{
				palindrome = str + start;
				palindrome_end = str + i;
			}
			i--;
		}
		start++;
	}
	if (palindrome)
	{
		*(palindrome_end + 1) = '\0';
		return (palindrome);
	}
	return (NULL);
}

void	search_all_palindromes(char **file)
{
	int		i;
	char	*palindrome;

	i = 0;
	while (file[i])
	{
		printf("Text: %s\n", file[i]);
		palindrome = search_palindrome(file[i]);
		if (palindrome)
		{
			printf("Longest palindrome: %s\n", palindrome);
			printf("Length: %ld\n", ft_strlen(palindrome));
		}
		else
		{
			printf("Longest palindrome: None\n");
			printf("Length: 0\n");
		}
		i++;
	}
}
