#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*dst;
	int	i;

	i = 0;
	dst = malloc(sizeof (char) * (i + 1));
	if (dst == NULL)
		return (NULL);
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return(dst);
}
