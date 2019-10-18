/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:25:15 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/18 16:45:13 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *str);

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*r_str;
	int		i;

	if (s1 == NULL || set == NULL)
		return (0);
	r_str = (char *)malloc(ft_strlen(s1) * sizeof(char));
	while (*set != 0)
	{
		if (*s1 == *set)
		{
			i = 0;
			while (*s1 == *set && *s1 != 0)
			{
				r_str[i] = *set;
				set++;
				s1++;
				i++;
			}
			return (r_str);
		}
		set++;
	}
	return (0);
}
