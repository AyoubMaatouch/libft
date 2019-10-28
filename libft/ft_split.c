/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/28 22:22:03 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_words(const char *s, char c)
{
	int		i;
	int		nb_words;

	i = 0;
	nb_words = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && ((i == 0) || s[i - 1] == c))
			nb_words++;
		i++;
	}
	return (nb_words);
}

static int	ft_nb_c(const char *s, char c)
{
	int i;
	int nb_c;

	i = 0;
	nb_c = 0;
	while (s[i] != 0 && s[i] == c)
		i++;
	while (s[i] != 0 && s[i] != c)
	{
		nb_c++;
		i++;
	}
	return (nb_c);
}

static void	free_ptr(char **g_ptr, int j)
{
	while (j)
		free(&g_ptr[j--]);
	free(g_ptr);
}

char		**ft_split(char const *s, char c)
{
	char			**g_ptr;
	int				nb_words;
	int				nb_c;
	static int		j;

	if (!s || !c)
		return (NULL);
	nb_words = ft_nb_words(s, c);
	if (!(g_ptr = (char**)malloc(sizeof(char*) * (nb_words + 1))))
		return (NULL);
	while (nb_words > j)
	{
		while (*s == c)
			s++;
		nb_c = ft_nb_c(s, c);
		if (!(g_ptr[j] = (char*)malloc(sizeof(char) * (nb_c + 1))))
		{
			free_ptr(&g_ptr[j - 1], nb_words);
			return (NULL);
		}
		g_ptr[j++] = ft_substr(s, 0, nb_c);
		s += nb_c + 1;
	}
	g_ptr[j] = 0;
	return (g_ptr);
}
