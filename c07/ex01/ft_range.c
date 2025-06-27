#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		n;

	n = 0;
	ptr = malloc(sizeof(int *) * (max - min));
	if (max <= min || ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (min < max)
	{
		ptr[n] = min;
		min++;
		n++;
	}
	return (ptr);
}