/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:29:57 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/09 17:47:36 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (haystack[i + k] == needle[k] && needle[k] != '\0')
			k++;
		if (needle[k] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char str[30] = "Creeper, Aww Man";
	const char fnd[20] = ",";
	printf("%s\n", strnstr(str, fnd, 15));
	printf("%s\n", ft_strnstr(str, fnd, 15));
	return (0);
}