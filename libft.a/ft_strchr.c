/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 21:59:28 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/17 19:23:29 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		(str)++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "Creeper, Aww Man!";
// 	printf("%s\n", strchr(str, 44)); // 44 is ,
// 	printf("%s\n", ft_strchr(str, 44));
// 	return (0);
// }
