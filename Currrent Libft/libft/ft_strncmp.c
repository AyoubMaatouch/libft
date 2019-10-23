/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:36:28 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/13 21:36:51 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				num;

	num = 0;
	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (s1[i] != s2[i])
		num = s1[i] - s2[i];
	return (num);
}
