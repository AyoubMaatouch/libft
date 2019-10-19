/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:25:15 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/19 19:52:37 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

int			ft_strtrim(char const *s1, char const *set)
{
	size_t size_s1 = ft_strlen(s1);
	size_t size_set = ft_strlen(set);
	int i = 0;
		printf("%lu\n", ft_strlen(s1));
			while (size_set > i)
				{
					if (*s1 == set[i])
					{
						s1++;
						i = 0;
					} 
					else
						i++;
					
				}
		printf("%lu\n", ft_strlen(s1));
			puts(s1);

		
		return(0);
}
int main()
{
	printf("%d\n", ft_strtrim("b@@a@@ you can Find hello here@@@", "@b"));
	return (0);
}