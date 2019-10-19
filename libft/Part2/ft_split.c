/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/19 22:34:54 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c)
{
	int i = 0, n = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			n++;
		i++;
	}

	printf ("\n%d\n", n);
	char **str = (char **)malloc( n * sizeof(char*));
	while (*s != 0)
	{
	if (*s == c)
	{
		i = 0;
		while (*s != 0)
		{
			*str[i] = '0';
			s++;
			i++;
			if ( *s == c)
			{/*	str++;
				s--;*/
				return (0);
				break;
			}
		
		}
		
	
	}
	s++;

}
	return (str);
}

int main()
{
	char **str = ft_split( "a splite, a another split, aa", 'a');
	int i = 0;
	while ( str[i] != 0)
	{
		puts(str[i]);
		i++;
	}
	return (0);

}
