/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:48:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/25 18:37:31 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_src;
	size_t	l_dest;
	int		i;

	i = 0;
	l_src = ft_strlen((char*)src);
	l_dest = ft_strlen(dst);
	while (size--)
	{
		dst[l_dest] = src[i];
		i++;
		if (size >= l_dest && src[i] != 0)
			return (l_dest + size);
	}
	dst[l_dest] = 0;
	return (l_src + l_dest);
}
