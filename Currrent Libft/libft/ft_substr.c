/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:20:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/24 18:25:19 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (char)start)
		{
			if (ft_strlen(s) < len)
				return (NULL);
			while (len > i)
			{
				ptr[i] = *s;
				i++;
				s++;
			}
			ptr[i] = 0;
			return (ptr);
		}
		s++;
	}
	return (ptr);
}
