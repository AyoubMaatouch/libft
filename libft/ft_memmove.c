/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:20:53 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/15 22:49:49 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void    *ft_memmove(void *dest, const void *src, size_t n) 
{
    unsigned int i, j;
    char cont[n];
    i = n;
    j = 0;
    
    /// with overlap
    if(strlen(src) > strlen(dest))
    {
      while (i--)
      {
        cont[j] = ((char *)src)[j];
        j++;
      }
     j = 0;
      while (n > j)
        {
            ((char*)dest)[j] = cont[j];
            j++;
        }

      puts(cont);
 }
     
    //Non-overlap 
     
  /*   else
     {
      while (n > j)
        {
            ((char*)dest)[j] = ((char *)src)[j];
            j++;
        }
     }
       */
        
    return (dest);
}
int main ()
{
char str[] = "123456789";
char str1[] = "123456789";


  int i ;
  i = strlen(str + 3);
  printf("%d\n", i);
  memmove(str + 3, str , 7);
  ft_memmove(str1 + 3, str1 , 7);

   puts (str);
  puts (str1);
  i = strlen(str1);
  printf("%d\n", i);
  return 0;
}