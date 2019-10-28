#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len);

static int	ft_sp_del(char *str, char c)
{
	int  occ_sp;
	int i;

	occ_sp = 0;
	i = 0;
	while (str[i] == c && str[i] != 0)
		i++;
	while (str[i])
	{
		if (str[i] != c && str[i + 1] == c)
			occ_sp++;
		i++;
	}
	return (occ_sp);
}
int ft_wordcount(char *s, char c)
{
	int count;
	static int i;
	
	while (s[i] == c && s[i] != 0)
		i++;
	while (s[i] != 0)
	{
		count++;
		i++;
	}
	return (count);
}


char **ft_split(char const *s, char c)
{
	int		occ_sp;
	char	**g_ptr;
	int		w_count;
	occ_sp = ft_sp_del((char*)s, c);
	g_ptr = (char**)ft_calloc(sizeof(char*), occ_sp + 1);
	while (*s == c)
		s++;
	int j;

	j = 0;
	while (s)
	{
		w_count = ft_wordcount((char*)s, c);
		g_ptr[j] = (char*)ft_calloc(sizeof(char), w_count + 1);
		g_ptr[j] = ft_substr(s, 0, w_count);

		j++;
		s += w_count;
	}


	return (g_ptr);
}

int main ()
{
	char **ptr = ft_split("split  ||this|for|me|||||!|", '|');
	return (0);
}
