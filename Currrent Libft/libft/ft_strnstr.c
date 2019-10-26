/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:58:40 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/27 00:38:25 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!(ft_strlen(to_find)))
		return ((char*)str);
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
	return (0);
}
