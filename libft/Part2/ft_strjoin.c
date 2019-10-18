/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:57:30 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/18 16:20:44 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(const char *str);

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if ((strlen(s1) == 0 && strlen(s2) == 0))
		return (0);
	str = (char *)malloc((strlen(s1) + strlen(s2)) * sizeof(char));
	while (strlen(s1))
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (strlen(s2))
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = 0;
	return (str);
}
