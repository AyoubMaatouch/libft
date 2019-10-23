/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/22 19:24:00 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int				nb(char *occ_ptr, char c)
{
	int i;
	int nb_occ;

	i = 0;
	nb_occ = 0;
	while (occ_ptr[i] != 0)
	{
		if (occ_ptr[i] != c && (occ_ptr[i - 1] == c || i == 0))
			nb_occ++;
		i++;
	}
	return (nb_occ);
}

void			*dp_print(char *g_ptr, char *occ_ptr, char c, int i)
{
	int n;

	n = 0;
	while (n < i)
	{
		while (occ_ptr[n] == c)
			n++;
		g_ptr[n] = occ_ptr[n];
		n++;
	}
	g_ptr[n] = 0;
	return (g_ptr);
}

static void		free_ptr(char **ptr, int j)
{
	while (j)
		free(&ptr[j--]);
	free(ptr);
}

static int		str_len(char *occ_ptr, char c)
{
	int i;

	i = 0;
	while (occ_ptr[i] != 0)
	{
		if (occ_ptr[i] == c && occ_ptr[i + 1] != c)
			break ;
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char			**g_ptr;
	char			*occ_ptr;
	int				i;
	int				nb_occ;
	static int		j;

	while (*s == c)
		s++;
	occ_ptr = (char*)s;
	nb_occ = nb(occ_ptr, c);
	g_ptr = (char **)malloc(nb_occ * sizeof(char *) + 1);
	while (j < nb_occ)
	{
		i = str_len(occ_ptr, c);
		if (!(g_ptr[j] = (char *)malloc(sizeof(char) * i)))
		{
			free_ptr(g_ptr, j - 1);
			return (NULL);
		}
		dp_print(g_ptr[j], occ_ptr, c, i);
		occ_ptr += i + 1;
		j++;
	}
	g_ptr[j] = NULL;
	return (g_ptr);
}
