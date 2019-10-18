/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:20:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/18 12:50:52 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(const char *str);

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(len * sizeof(char));
	while (*s != '\0')
	{
		if (*s == 'a')
		{
			if (ft_strlen(s) < len)
				return (0);
			while (len > i)
			{
				ptr[i] = *s;
				i++;
				s++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
		s++;
	}
	return (0);
}
