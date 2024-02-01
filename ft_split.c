/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:55:34 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/02/01 19:55:17 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	const	*skip_ch(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static char	**count_str(char const *s, char c)
{
	size_t	count;
	char	**res;

	res = NULL;
	count = 0;
	while (*s)
	{
		while (*(s + 1) != c && *(s + 1))
			s++;
		if (*s != c)
			count++;
		s++;
	}
	if (count)
		res = malloc((count + 1) * sizeof(char *));
	return (res);
}

static void	free_res(char **res, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	i = 0;
	if (!(res = count_str(s, c)))
		return (res);
	while (*s)
	{
		s = skip_ch(s, c);
		j = 0;
		while (s[j] != c && s[j])
			j++;
		res[i] = malloc(j + 1);
		if (!res[i])
		{
			free_res(res, i);
			return (NULL);
		}
		ft_strlcpy(res[i], s, j + 1);
		s = skip_ch(s + j, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
