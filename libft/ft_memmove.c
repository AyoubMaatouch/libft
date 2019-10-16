/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:20:53 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/17 00:43:28 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include<stdio.h>


void *ft_memmove(void *dest, void *src, size_t n) 
{ 

   char *csrc = (char *)src; 
   char *cdest = (char *)dest; 
  
   char temp[n];
  
  
       int i = 0;
       while (i < n)
       {
       temp[i] = csrc[i];
        i++;
       }
      // temp[i] = "\0";
       
 
       i = 0;
  while (i <= n)
{
         cdest[i] = temp[i]; 
         i++;
}
   return (dest);
   

     /*     if (src < dest)
          {
            while (n--)
            {
              ((char *)dest)[n] = ((char *)src)[n];
            }
          }
          else 
          {
            //while ()
          }

          return (dest);
          }
*/
}
int main()
{
  char *str = (char *)malloc(10);
  char *str1 = (char *)malloc(10);

  str = strcpy(str, "123456789");
  str1 = strcpy(str1, "123456789");

  memmove(str + 3, str, 7);

  ft_memmove(str1 + 3, str1, 7);

  printf("%s\n", str);
  printf("%s\n", str1);
  return 0;
}