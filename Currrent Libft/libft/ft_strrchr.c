/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:43:34 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/24 17:38:37 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != c)
	{
		i++;
		if (str[i] == c)
		{
			j = i;
			i++;
		}
		if (str[i] == '\0')
			break ;
	}
	if (j == 0)
		return (0);
	return ((char *)&str[j]);
}
