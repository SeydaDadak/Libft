/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:51:51 by sdadak            #+#    #+#             */
/*   Updated: 2025/06/18 16:23:44 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	char	b[] = "see FF your FF return FF now FF";
	char	l[] = "FF";

	printf("%s", ft_strnstr(b, l, 200));
}
