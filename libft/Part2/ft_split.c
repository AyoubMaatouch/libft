/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/20 22:34:04 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	size_t n_oc = 0;
	char *s_ptr;
	s_ptr = (char*)s;

	printf("%lu\n",strlen(s));

	while (*s_ptr != 0)
	{
		if (*s_ptr == c)
			n_oc++;
		s_ptr++;
	}
	printf("%lu\n",n_oc);
	printf("%lu\n",strlen(s));
	char **ptr;
	ptr = (char**)malloc(n_oc * sizeof(char*));
	int i = n_oc;
	while (*s != 0)
	{
		*ptr = (char *)s;
		if(*s == c)   // and i + 1
		{
			s++;
			ptr[i] = (char *)s;
				//i++;
			i--;

		}
		s++;
	}
	
	return (ptr);
}

int main()
{
	char **str = ft_split( "asplite, aanother split", 'a');
	int i = 0;
	
		puts(str[1]);
	
	return (0);

}
