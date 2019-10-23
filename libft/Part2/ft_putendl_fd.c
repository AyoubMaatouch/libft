/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:11:56 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/23 16:17:07 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	size_t i;

	i = -1;
	while (++i < ft_strlen(s))
		ft_putchar_fd(s[i], fd);
	ft_putchar_fd('\n', fd);
}
