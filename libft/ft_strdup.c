/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:38:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 21:44:21 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*r_value;
	int		i;

	i = 0;
	value = (char *)malloc(ft_strlen(s1) * sizeof(char));
	while (ft_strlen(s1))
	{
		r_value[i] = *s1++;
		i++;
	}
	return (r_value);
}
