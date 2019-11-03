#include "libft.h"
#include <string.h>

int main ()
{
	char *p = malloc(5);

	//printf ("%lu\n", ft_strlcpy("hell0","hello",4));
	printf ("%lu\n", strlcpy(p,"hello from here",5));
	return (0);
}
