/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:42:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/24 18:17:55 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int i;

	i = 0;
	if ((dest) == 0 && (src) == 0)
		return (NULL);
	while (n > i)
	{
		((char*)dest)[i] = ((char *)src)[i];
		i++;
		if (((char*)dest)[i] == c)
			break ;
	}
	return ((unsigned char *)dest);
}
