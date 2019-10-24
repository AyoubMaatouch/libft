/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:10:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/24 16:48:33 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_bzero(void *b, size_t len);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	if (!(ptr = malloc(count * size)))
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
