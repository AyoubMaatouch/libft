/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:48:51 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 12:54:29 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strchr(const char *str, int c)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (str[i] != c)
	{
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	else
		return (0);
}
int main () {
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = 'z';
	char *ret;
	const char str1[] = "http://www.tutorialspoint.com";
	const char ch1 = 'z';
	char *ret1;
	ret = strchr(str, ch);
	ret1 = ft_strchr(str1, ch1);

	printf("%c\n%s\n", ch, ret);
	printf("%c\n%s\n", ch1, ret1);

	return(0);
}
