/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:40:17 by sdadak            #+#    #+#             */
/*   Updated: 2025/06/16 20:14:59 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if(dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned const char *)src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
