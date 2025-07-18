/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:01:03 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/17 19:20:07 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		count;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= len)
		return (ft_strdup(""));
	count = ft_strlen(s);
	res = malloc(sizeof(char) * count + 1);
	while (start <= len && s[start] != '\0')
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char s[] = "Hello there";
// 	int	start = 3;
// 	size_t	len = 5;
// }