/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:10:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 21:50:12 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    int i = 0;
    ptr = malloc(count * size);
    while (count--)
    {
      ((char*)ptr)[i] = '0';
	  i++;
    }
    puts((char*)ptr);
    return (ptr);
}

int main()
{
    char *str;
       str = ft_calloc(5, sizeof(char));

      
return (0);

}
