/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:51:51 by sdadak            #+#    #+#             */
/*   Updated: 2025/06/17 13:14:46 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	char	d[10] = "deneme";
	char	s[10] = "asdfghj";
	printf("%zu\n%s", ft_strlcpy(d,"lorem ipsum dolor sit amet",0), d);
	
	//printf("\n%d\n%s", strlcpy(s,"aasd",10), s);
}
