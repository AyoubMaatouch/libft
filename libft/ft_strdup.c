/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:38:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/16 19:52:19 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
int *strlen(const char *str);

 char *ft_strdup(const char *s1)
{
    char *R_value;
    R_value = (char *)malloc(strlen(s1) * sizeof(char));

    while (strlen(s1))
    {
            *R_value++ = *s1++;

    }
    return (R_value);

}
int main() 
{ 
	char source[] = "GeeksForGeeks"; 
    char source1[] = "GeeksForGeeks"; 


	
	char* target = strdup(source); 
    char* target1 = strdup(source1); 


	printf("%s\n", target); 
    printf("%s", target); 

	return 0; 
} 
