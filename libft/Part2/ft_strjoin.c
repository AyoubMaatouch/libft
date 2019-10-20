/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:57:30 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/20 17:08:08 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if ((ft_strlen(s1) == 0 && ft_strlen(s2) == 0))
		return (0);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	while (ft_strlen(s1))
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (ft_strlen(s2))
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = 0;
	return (str);
}
