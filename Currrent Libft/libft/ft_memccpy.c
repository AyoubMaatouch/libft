/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:42:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 16:15:04 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		((char*)dest)[i] = ((char *)src)[i];
		i++;
		if (((char*)dest)[i] == c)
			break ;
	}
	return (0);
}
