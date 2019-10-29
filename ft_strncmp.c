/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:36:28 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/29 15:03:36 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				num;

	num = 0;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != 0 && s2[i] != 0)
	{
		i++;
	}
	if (s1[i] != s2[i] && n != 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (num);
}
