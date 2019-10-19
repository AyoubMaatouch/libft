/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:25:15 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/19 22:43:58 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

int			ft_strtrim(char const *s1, char const *set)
{
	size_t size_s1 = ft_strlen(s1);
	size_t size_set = ft_strlen(set);
	char *l_ptr = (char *)s1 + size_s1 - 1;
	char *f_ptr = (char *)s1;

	int i = 0;
		printf("%lu\n", ft_strlen(l_ptr));
	//Backward Function ( add + 1)
	while ( size_set > i)
	{
		if (*l_ptr == set[i])
					{
						l_ptr--;
						i = 0;
					} 
					else
						i++;
	}
		printf("%lu\n", ft_strlen(l_ptr));	
				puts(l_ptr);

//Forward Function
	printf("%lu\n", ft_strlen(f_ptr));
		i = 0;
		while (size_set > i)
				{
					if (* f_ptr == set[i])
					{
						f_ptr++;
						i = 0;
					} 
					else
						i++;
					
				}
				
		printf("%lu\n", ft_strlen(f_ptr));	
				puts(f_ptr);
				int re_length = ((ft_strlen(f_ptr) - ft_strlen(l_ptr) + 1));
		char *re_str;
		re_str = (char *)malloc(re_length * sizeof(char));
		
			i = 0;
			while (re_length > i)
			{
				puts (f_ptr);
				re_str[i] = f_ptr[i];
					
					
					i++;
			}
		printf("SizeOF The needed String : %d\n", re_length);
		puts(re_str);
		return(0);
}
int main()
{
	printf("%d\n", ft_strtrim("@@@@@@@@123456789@x@@@", "x@"));
	return (0);
}