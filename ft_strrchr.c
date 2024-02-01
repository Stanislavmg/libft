/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:58:30 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/02/01 17:05:08 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;

	ps = NULL;
	while (*s)
	{
		if (*s == c)
			ps = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (ps);
}
