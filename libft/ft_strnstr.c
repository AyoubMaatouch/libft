/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:58:40 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 20:18:32 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while ( x < n )
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}

int main () {
	 char haystack[20] = "TutorialsPoint";
	 char needle[10] = "u";
	char *ret;

	ret = strnstr(needle, haystack, 0);

	printf("The substring is: %s\n", ret);

	return(0);
}
