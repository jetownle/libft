/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:52:14 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/08 10:53:56 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int 	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
