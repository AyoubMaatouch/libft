/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:48:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 22:29:59 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str);

unsigned long ft_strlcat(char * restrict dst, const char * restrict src, unsigned int size)
{
	int i = ft_strlen((char *)src);

	return (size + i);

}
int main()
{

	char src[] = "Hello";
	char dest[] = "Hello";

	printf("%lu\n", strlcat(dest, src, 4));
	printf("%lu\n", ft_strlcat(dest, src, 4));
	return (0);
}
