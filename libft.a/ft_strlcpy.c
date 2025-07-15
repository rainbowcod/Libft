/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:46:40 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/08 20:10:08 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (src[k] != '\0' || i < destsize + 1)
		dest[i++] = src[k++];
	dest[++i] = '\0';
	return (k);
}

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[10] = "";
	char	s[] = "Hello World";
	char	d[10] = "";
	printf("%zu\n", strlcpy(dest, src, 5));
	printf("%zu\n", ft_strlcpy(d, s, 5));
	return (0);
}
