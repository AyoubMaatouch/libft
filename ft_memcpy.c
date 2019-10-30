/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:24:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/30 15:41:12 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	if (dest == src)
		return (dest);
	if ((dest) == 0 && (src) == 0)
		return (NULL);
	while (n > i)
	{
		((char*)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
