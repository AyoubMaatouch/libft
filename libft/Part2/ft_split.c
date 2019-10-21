/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/21 23:56:04 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>



char **ft_split(char const *s, char c)
{
  //occurance counting
  while (*s == c)
      s++;
  char *occ_ptr = (char*)s;
  int nb_occ = 0, i = 0;
  while (occ_ptr[i] != 0)
  {
    if (occ_ptr[i] != c && (occ_ptr[i - 1] == c || i == 0))
        nb_occ++;
    i++;
  }
  char **g_ptr;
  g_ptr = (char **)malloc(nb_occ * sizeof(char *));
  int j = 0;
  i = 0;
  int n;

  occ_ptr = (char*)s;
  while (j < nb_occ)
    {
      i = 0;
    
                while (occ_ptr[i] != 0)
                {
                  if (occ_ptr[i] == c && occ_ptr[i + 1] != c)
                      break;
                  i++;
                }
                
      g_ptr[j]= (char *)malloc(sizeof(char) * i);
      
      n = 0;
      while (n < i)
      {
        while (occ_ptr[n] == c)
            n++;
        g_ptr[j][n] = occ_ptr[n];
        n++;
        
      }
       g_ptr[j][n] = 0;
      puts(g_ptr[j]);
      occ_ptr = occ_ptr + i + 1;
      
      j++;
      
    }
    g_ptr[j] = 0 ;
 // printf("%d\n", j);
	//printf("%s\n", g_ptr[j]);

	return (g_ptr);
}

int main()
{
	 ft_split( "   5 5                                                         5   ", ' ');
   
	return (0);

}