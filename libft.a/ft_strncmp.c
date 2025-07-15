/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:36:40 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/09 12:54:16 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "fucknugget";
	char	s2[] = "fucknugget";
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	return (0);
}