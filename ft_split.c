/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:56:43 by sdadak            #+#    #+#             */
/*   Updated: 2025/06/26 21:08:31 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wcount(const char *p, char a)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 0;
	while (p[i])
	{
		if (p[i] != a)
		{
			wcount++;
			while (p[i] != a && p[i + 1])
			{
				i++;
			}
		}
		i++;
	}
	return (wcount);
}

static char	**ft_fill(char **ptr, const char *p, char a)
{
        size_t  i;
	size_t	j;
	size_t	ccount;

	j = 0;
        i = 0;
        while (p[i])
        {
                if (p[i] != a)
                {
			ccount = 0;
                        while (p[i] != a && p[i + 1])
                        {
				ccount++;
                                i++;
                        }
			ptr[j++] = ft_substr(p, i - ccount, ccount);
                }
                i++;
        }
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	ptr = malloc(ft_wcount(s, c) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_fill(ptr, s, c);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
