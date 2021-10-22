/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:48:44 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:48:46 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

// int main()
// {
// 	char *s;
// 	s = "asdf";
// 	int a = ft_strlen(s);
// 	unsigned long b = strlen(s);
// 	printf("%d %lu", a, b);
// }
