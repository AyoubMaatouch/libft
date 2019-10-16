/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:20:53 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/16 14:02:20 by aymaatou         ###   ########.fr       */
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
   if( src > dest && dest < src + n)
    {
       src += n -1;
      dest += n -1;
      while (n--)
        *(char *)dest-- = *(char *)src--;
    }

/*
 
            while (i--)
                {
                  cont[j] = *(char *)src++;
                  j++;
                }
              j = 0;
                while (n > j)
                  {    
                    *(char*)dest++ = cont[j];
                      j++;
                  }
              printf("The j number : %zu\n", n);
                puts(cont);
                    return (dest);

 
     */
    //Non-overlap 
     
    else
     {
      while (n > j)
        {
            ((char*)dest)[j] = ((char *)src)[j];
            j++;
        }
     }
       
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

   printf ("%s\n", str);
   printf ("%s\n", str1);
  i = strlen(str1);
  printf("%d\n", i);
  return 0;
}