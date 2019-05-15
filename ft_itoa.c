/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 00:48:33 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/15 02:14:25 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	nbr;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	i = ft_intlen(n);
	if (!(res = ft_strnew(i)))
		return (NULL);
	if (n < 0)
		res[0] = '-';
	nbr = (n < 0) ? -n : n;
	i--;
	while (nbr != 0)
	{
		res[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return (res);
}