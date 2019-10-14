/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:45:09 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/14 14:08:00 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int				ft_strlen(char *str);

unsigned long	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	int		i;
	char	*empty;

	empty = dst;
	i = ft_strlen((char *)src);
	return (size + i);
}

int main () {
	char src[] = "21345678";
	char dest[] = "12345";
	int i;
	i = ft_strlcat(dest, src, 0);

	printf("Final value : %d\n", i);

	return(0);
}