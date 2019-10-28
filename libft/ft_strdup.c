/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:38:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/27 17:02:30 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r_value;
	int		i;

	i = 0;
	if (!(r_value = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1)))
		return (NULL);
	while (ft_strlen(s1))
	{
		r_value[i] = *s1++;
		i++;
	}
	r_value[i] = 0;
	return (r_value);
}
