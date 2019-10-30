/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:39:16 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/30 22:40:01 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*ptr;
	int		i;

	if (ft_strlen(to_find) != 0 && n == 0)
		return (NULL);
	if (n == 0 || *to_find == 0 || to_find == NULL
			|| to_find == str || ft_strlen(to_find) == 0)
		return ((char *)str);
	while (*str != 0 && n--)
	{
		if (*str == *to_find)
		{
			ptr = (char*)str;
			i = 0;
			while (*str == to_find[i++] && *str && *to_find && n > 0)
			{
				if (to_find[i] == 0 && n != 0 && to_find)
					return (ptr);
				str++;
				n--;
			}
		}
		str++;
	}
	return (NULL);
}
