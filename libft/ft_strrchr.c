/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:43:34 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 16:22:59 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int i, j = 0;

	i = 0;
	while (str[i] != c)
	{
		i++;
		if (str[i] == c)
		{
			j = i;
			i++;
		}
		if (str[i] == '\0')
			break;
	}
	if (j == 0 )
		return (0);
	return ((char *)&str[j]);
}

int main () {
	int len;
	const char str[] = "www.google.com";
	const char ch = 'j';
	char *ret;
	const char str1[] = "www.google.com";
	const char ch1 = 'j';
	char *ret1;


	ret = strrchr(str, ch);
	ret1 = ft_strrchr(str1, ch1);

	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", ch1, ret1);
	return(0);
}
