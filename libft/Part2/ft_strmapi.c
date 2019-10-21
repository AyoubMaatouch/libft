/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 00:04:02 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/22 00:13:37 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *p;

	i = 0;
	p = (char *)malloc(6);
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	ft_f(unsigned int i, char c)
{
	if (i < 2)
	{
		c = '0';
	}
	else if (i < 5 && i >= 2)
		c = '7';
	return (c);
}

int		main(void)
{
	char v[] = "Hello";

	puts(ft_strmapi(v, &ft_f));
	return (0);
}
