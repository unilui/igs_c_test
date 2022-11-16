#include "ex_01.h"

char	*read_file(char *file)
{
	int		fd;
	int		rd;
	char	*text;
	char	*tmp;
	char	buffer[4096];

	text = NULL;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		printf("No such file or directory: %s\n", file);
		return (NULL);
	}
	rd = read(fd, buffer, 4095);
	while (rd)
	{
		buffer[rd] = '\0';
		tmp = text;
		text = ft_strjoin(tmp, buffer);
		free(tmp);
		rd = read(fd, buffer, 4095);
	}
	close(fd);
	return (text);
}

char	**load_file(char *file)
{
	char	*text;
	char	**split_text;

	text = read_file(file);
	if (!text)
		return (NULL);
	split_text = ft_split(text, '\n');
	free(text);
	return (split_text);
}
