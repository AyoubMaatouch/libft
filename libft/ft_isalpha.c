/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:23:51 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/12 12:39:37 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
	{
		return (1);
	}
	return (0);
}
