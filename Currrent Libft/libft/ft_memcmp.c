/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 00:11:41 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/25 16:19:26 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i] && n - 1 > i)
		i++;
	if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	return (0);
}
