/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:20:53 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 16:14:08 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	temp[n];
	size_t	i;

	i = -1;
	while (++i < n)
		temp[i] = ((char *)src)[i];
	i = -1;
	if (dest > src)
	{
		while (++i < n)
			((char *)dest)[i] = temp[i];
	}
	else
	{
		while (++i < n)
			((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}
