/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:25:15 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/20 15:30:50 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);


static char	*f_trim(char *l_ptr, const char *set)
{		size_t size_set;
		size_set = ft_strlen(set);

	int i;
	i = 0;
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
	return (l_ptr);
	}

static char	*b_trim(char *f_ptr, const char *set)
{		size_t size_set;
		size_set = ft_strlen(set);

	int i;
	i = 0;
	while ( size_set > i)
	{
		if (*f_ptr == set[i])
					{
						f_ptr++;
						i = 0;
					} 
					else
						i++;
	}
	return (f_ptr);
	}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t size_s1;
	size_t size_set;
	char *l_ptr;
	char *f_ptr;
	char *re_str;
	int i;
	int re_length;
	
	size_s1 = ft_strlen(s1);
	size_set = ft_strlen(set);
	l_ptr = (char *)s1 + size_s1 - 1;
	f_ptr = (char *)s1;
	i = 0;
	
	l_ptr = f_trim(l_ptr,set);
	//forward 
/*	while ( size_set > i)
	{
		if (*l_ptr == set[i])
					{
						l_ptr--;
						i = 0;
					} 
					else
						i++;
	}*/

	f_ptr = b_trim( f_ptr, set);

	//backword
	/*	i = 0;
		while (size_set > i)
				{
					if (* f_ptr == set[i])
					{
						f_ptr++;
						i = 0;
					} 
					else
						i++;
					
				}*/
		re_length = ((ft_strlen(f_ptr) - ft_strlen(l_ptr) + 1));
		re_str = (char *)malloc(re_length * sizeof(char));
			i = 0;
			while (re_length > i)
			{
				re_str[i] = f_ptr[i];		
				i++;
			}
			if (ft_strlen(re_str) == 0)
				return (0);	
		return(re_str);
}
int main()
{
	printf("%s\n", ft_strtrim("aaaa15161i5556aaaaa", "ia"));
	return (0);
}