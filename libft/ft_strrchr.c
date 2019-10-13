/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:43:34 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 15:51:45 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strrchr(const char *str, int c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != c)
	{
		i++;
		if(str[i] == '\0')
			return(0);
		if (str[i] == c)
			j = i;
	}
	return ((char *)&str[j]);
}

int main () {
	int len;
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}

