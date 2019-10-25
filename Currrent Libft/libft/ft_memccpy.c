/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:42:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/25 18:33:56 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	m;

	i = 0;
	m = c;
	while (n > i && ((unsigned char*)src)[i] != 0)
	{
		((unsigned char*)dest)[i] = ((unsigned char *)src)[i];
		++i;
		if (((unsigned char*)src)[i] == m)
		{
			((unsigned char*)dest)[i] = ((unsigned char *)src)[i];
			break ;
		}
	}
	if (ft_strlen(dest) != 0 && i != 0)
		return (NULL);
	return (dest + i + 1);
}
