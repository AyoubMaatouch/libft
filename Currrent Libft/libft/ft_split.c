/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/28 00:39:12 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
   static int			nb(char *occ_ptr, char c)
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

   static void			*dp_print(char *g_ptr, char *occ_ptr, char c, int i)
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

   static void			free_ptr(char **ptr, int j)
   {
   while (j)
   free(&ptr[j--]);
   free(ptr);
   }

   static int			str_len(char *occ_ptr, char c)
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

   char				**ft_split(char const *s, char c)
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
   if (!(g_ptr = (char **)malloc(nb_occ * sizeof(char *) + 1)))
   return (NULL);
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
return (g_ptr);
}*/
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

	count = 0;
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
	int i = 0;
	while (s[i] != 0)
	{
		w_count = ft_wordcount((char*)s, c);
		g_ptr[j] = (char*)ft_calloc(sizeof(char), w_count + 1);
		g_ptr[j] = ft_substr(s, 0, w_count);

		j++;
		s += w_count;
		i++;
	}


	return (g_ptr);
}

int main ()
{
	char **ptr = ft_split("split  ||this|for|me|||||!|", '|');
	while (*ptr)
	{	puts(*ptr);
		ptr++;
	}
	return (0);
}
