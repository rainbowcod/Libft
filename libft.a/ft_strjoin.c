/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:38:50 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/17 19:23:21 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*res;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!res)
		return (NULL);
	if (!s1)
		res[0] = '\0';
	else
		res = ft_strlcpy(res, s1, len1);
	if (!s2)
		res[len2 + 1] = '\0';
	else
		res[len2 + 1] = ft_strlcpy(res, s2, len2);
	return (res);
}
