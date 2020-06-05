/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:43:34 by aymaatou          #+#    #+#             */
/*   Updated: 2019/11/03 16:48:32 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int j;
	int a;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			j = i;
			if (j == 0)
				a = j + 1;
		}
		if (str[++i] == '\0')
			break ;
	}
	if (str[i] == '\0' && c == '\0')
		return ((char *)&str[i]);
	if (j == 0 && a != 1)
		return (NULL);
	return ((char *)&str[j]);
}
