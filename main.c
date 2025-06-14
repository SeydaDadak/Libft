/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:51:51 by sdadak            #+#    #+#             */
/*   Updated: 2025/06/14 18:27:40 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	size_t	i = 0;
	int	s[] = {1,2,3,4};
	int	s2[] = {1,2,3,4};
	
	memset(s, 1, 2);
	memset(s2, 1, 2);

	ft_bzero(s, 2);

	bzero(s2, 2);

	while (i < 4)
	{
		printf("%d,", s[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 4)
	{
		printf("%d,", s2[i]);
		i++;
	}
}
