/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:10:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/16 21:41:02 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void *calloc(size_t count, size_t size)
{
    void *ptr;
    int i = 0;
    ptr = malloc(count * size);
    while (count--)
    {
        *ptr = 0;
        ptr++;
       // i++;
    }
    return (ptr);
}

int main()
{
    char *str;
       str = calloc(5, sizeof(char));

       puts(str);
return (0);

}