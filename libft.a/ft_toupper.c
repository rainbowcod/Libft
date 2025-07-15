/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 21:18:49 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/08 22:02:24 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(void)
{
	printf("%c\n", toupper(70));
	printf("%c\n", ft_toupper(70));
	return (0);
}
// return ((c >= 97 && c <= 122) ? (c - 32) : c);