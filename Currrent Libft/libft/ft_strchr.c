/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:48:51 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/25 18:30:26 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != c)
	{
		i++;
		if (str[i] == '\0' && c == '\0')
			return ((char *)&str[i]);
		if (str[i] == '\0')
			return (NULL);
	}
	return ((char *)&str[i]);
}
