/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 00:11:41 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/18 22:36:19 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (((char*)s1)[i] == ((char*)s2)[i] && n--)
	{
		i++;
	}
	if (((char*)s1)[i] != ((char*)s2)[i])
		return (((char*)s1)[i] - ((char*)s2)[i]);
	return (0);
}
