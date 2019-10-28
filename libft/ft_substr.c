/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:20:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/27 16:46:53 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(ptr = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (s[j] != '\0')
	{
		if (j == start)
		{
			if (ft_strlen(s) < len)
				return (NULL);
			while (len > i)
				ptr[i++] = s[j++];
			ptr[i] = 0;
			return (ptr);
		}
		j++;
	}
	ptr[i] = 0;
	return (ptr);
}
