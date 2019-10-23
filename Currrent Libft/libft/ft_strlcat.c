/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:48:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 19:18:27 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strlen(char *str);

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
		if (size >= l_dest)
			return (l_dest + size);
	}
	dst[l_dest] = '\0';
	return (l_src + l_dest);
}
