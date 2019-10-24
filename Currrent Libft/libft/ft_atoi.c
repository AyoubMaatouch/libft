/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:56:13 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/24 16:23:21 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	long	number;
	int		sign;
	int		l_i;

	l_i = 0;
	sign = 1;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (number * sign);
		number = number * 10 + (str[i] - 48);
		i++;
		l_i++;
		if (l_i > 10 && sign == 1)
    	  	return (-1);
   		if (l_i > 10 && sign == -1)
     		 return (0);
	}
	return (number * sign);
}
