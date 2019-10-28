/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:11:56 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/26 23:42:06 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t i;

	i = -1;
	if (s)
	{
		while (++i < ft_strlen(s))
			ft_putchar_fd(s[i], fd);
		ft_putchar_fd('\n', fd);
	}
}
