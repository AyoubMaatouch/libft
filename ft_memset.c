/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:15:59 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/29 20:32:22 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int i;

	i = 0;
	while (len > i)
	{
		((char*)b)[i] = c;
		i++;
	}
	return (b);
}
