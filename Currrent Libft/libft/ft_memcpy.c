/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:24:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 16:15:53 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		((char*)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
