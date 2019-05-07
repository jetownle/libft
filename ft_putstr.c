/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:55:11 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 14:00:31 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* outputs the string s to the standard output */

#include <libft.h>

void 	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

