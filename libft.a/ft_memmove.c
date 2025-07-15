/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:03:04 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/08 19:30:51 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	k;
	char	*tmp;
	char	*dest;

	i = 0;
	k = 0;
	dest = (char *)dst;
	tmp = (char *)src;
	while (i < len)
	{
		dest[k++] = tmp[i++];
	}
	return (dest);
}

int	main(void)
{
	char	dst[20] = "Hello";
	char	src[20] = "Creeper Aww Man";
	printf("%s\n", memmove(dst, src, 20));
	printf("%s\n", ft_memmove(dst, src, 20));
	return (0);
}
