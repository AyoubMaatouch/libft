/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:57:30 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/26 18:06:27 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s1) +
						ft_strlen(s2)) * sizeof(char) + 1)))
		return (NULL);
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
