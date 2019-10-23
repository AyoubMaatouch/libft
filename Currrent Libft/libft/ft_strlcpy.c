/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:45:09 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/18 22:37:23 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strlen(char *str);

unsigned long	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (size - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}
