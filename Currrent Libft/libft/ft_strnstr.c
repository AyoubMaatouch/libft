/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:58:40 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/25 18:39:16 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	x;
	int				y;

	x = 0;
	y = 0;
	if (to_find == 0)
		return ((char*)str);
	while (x < n && str[x] != 0)
	{
		y = 0;
		while (str[x + y] == to_find[y] && n)
		{
			if (to_find[y + 1] == '\0')
				return (&((char *)str)[x]);
			y++;
			n--;
		}
		x++;
	}
	return (0);
}
