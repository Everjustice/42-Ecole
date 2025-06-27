
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*sonuc;
	int		i;

	i = 0;
	sonuc = malloc(sizeof(*src));
	if (sonuc == 0)
		return (0);
	while (src[i] != '\0')
	{
		sonuc[i] = src[i];
		i++;
	}
	sonuc[i] = '\0';
	return (sonuc);
}