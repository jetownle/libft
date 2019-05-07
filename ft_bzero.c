/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:38:36 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 13:52:46 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* writes n zeroed bytes to string s, if n is zero bzero does nothing */

#include <libft.h>

void 	ft_bzero(void *s, size_t n)
{
	char *i;

	i = s;
	while(n)
	{
		*i = 0;
		i++;
		n--;
	}
}

