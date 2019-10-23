/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:03:15 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/23 20:14:38 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str);

void	ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd)
{
	size_t i;

	i = -1;
	while (++i < ft_strlen(s))
		ft_putchar_fd(s[i], fd);
}

