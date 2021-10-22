/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:44:05 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:44:08 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
