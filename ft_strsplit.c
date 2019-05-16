/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 00:59:20 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/15 16:54:30 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**splitstrs;
	static int	sub;
	static int	index;
	int			cpy;

	if (!s || !(splitstrs = (char **)malloc(sizeof(char *) * \
		ft_findsubstrs(s, c) + 1)))
		return (NULL);
	while (index < ft_findsubstrs(s, c))
	{
		cpy = 0;
		if (!(splitstrs[index] = ft_strnew(ft_findsubstrlen(&s[sub], c))))
			return (NULL);
		while (s[sub] == c)
			sub++;
		while (s[sub] && s[sub] != c)
			splitstrs[index][cpy++] = s[sub++];
		index++;
	}
	splitstrs[index] = 0;
	return (splitstrs);
}
