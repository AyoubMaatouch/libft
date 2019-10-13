/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:48:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 22:34:06 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned long	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	int i;

	i = ft_strlen((char *)src);
	return (size + i);
}
