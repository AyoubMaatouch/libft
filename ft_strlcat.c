/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:48:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/11/03 17:02:28 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int lens;

	lens = ft_strlen(src);
	i = 0;
	if (dst)
	{
		while (*dst && size)
		{
			size--;
			i++;
			dst++;
		}
	}
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size != 0)
	{
		*dst = 0;
	}
	return (i + lens);
}
