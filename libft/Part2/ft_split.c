/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:02:04 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/22 16:23:49 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
int len(char *occ_ptr, char c)
{
  int i;
  while (occ_ptr[i] != 0)
                {
                  if (occ_ptr[i] == c && occ_ptr[i + 1] != c)
                      return (i);
                  i++;
                }
                return (0);
}
*/
int nb(char *occ_ptr, char c)
{
  int i;
  int nb_occ;

  i = 0;
  nb_occ = 0;
   while (occ_ptr[i] != 0)
  {
    if (occ_ptr[i] != c && (occ_ptr[i - 1] == c || i == 0))
        nb_occ++;
    i++;
  }
  return (nb_occ);
}
void *dp_print(char *g_ptr, char *occ_ptr, char c , int i)
{
  int n;

    n = 0;
      while (n < i)
      {
        while (occ_ptr[n] == c)
            n++;
        g_ptr[n] = occ_ptr[n];
        n++;   
      }
       g_ptr[n] = 0;

      return (g_ptr);
}
char **ft_split(char const *s, char c)
{
  //occurance counting
  char *occ_ptr;
  char **g_ptr;
  
  while (*s == c)
      s++;
  occ_ptr = (char*)s;
  int nb_occ = nb(occ_ptr, c);
  int i ;
 
                                                /*
                                                  while (occ_ptr[i] != 0)
                                                  {
                                                    if (occ_ptr[i] != c && (occ_ptr[i - 1] == c || i == 0))
                                                        nb_occ++;
                                                    i++;
                                                  }*/
  
  g_ptr = (char **)malloc(nb_occ * sizeof(char *));
  int j = 0;
  i = 0;
  int n;

  occ_ptr = (char*)s;
  while (j < nb_occ)
    {
      i = 0;
      //printf("%d\n", i);
          // OUTING Function

                while (occ_ptr[i] != 0)
                {
                  if (occ_ptr[i] == c && occ_ptr[i + 1] != c)
                      break;
                  i++;
                }
                
      g_ptr[j]= (char *)malloc(sizeof(char) * i);
      
     
     // Printing Function
     /* n = 0;
      while (n < i)
      {
        while (occ_ptr[n] == c)
            n++;
        g_ptr[j][n] = occ_ptr[n];
        n++;
        
      }
       g_ptr[j][n] = 0;
*/
    dp_print(g_ptr[j], occ_ptr,  c , i);

      puts(g_ptr[j]);


      occ_ptr += i + 1;
      
      j++;
      
    }
    g_ptr[j] = 0 ;
 // printf("%d\n", j);
	//printf("%s\n", g_ptr[j]);

	return (g_ptr);
}

int main()
{
	 ft_split( "1 234    5678 91234 567           89      ", ' ');
   
	return (0);

}