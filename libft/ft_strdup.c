/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:38:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/19 22:45:14 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*r_value;
	int		i;

	i = 0;
	r_value = (char *)malloc(ft_strlen(s1) * sizeof(char));
	while (ft_strlen(s1))
	{
		r_value[i] = *s1++;
		i++;
	}
	if (ft_strlen(r_value) == 0)
		return (0);
	return (r_value);
}
