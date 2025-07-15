/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 21:03:10 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/08 21:15:09 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k])
		k++;
	if (i > destsize)
		return (destsize + k);
	return (i + k);
	// return (detsize + k || k + i)
}

int	main(void)
{
	char dest[20] = "Hello there";
	char src[20] = "Creeper Aww Man";
	char d[20] = "Hello there";
	char s[20] = "Creeper Aww Man";
	printf("%lu\n", strlcat(d, s, 20));
	printf("%zu\n", ft_strlcat(dest, src, 20));
	return (0);
}