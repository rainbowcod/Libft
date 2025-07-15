/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:20:08 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/10 12:58:22 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	count;
	int	pm;

	res = 0;
	count = 0;
	pm = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i++] == '-')
		pm++;
	if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (pm == 2)
		res *= -1;
	return (res);
}

int	main(void)
{
	const char	str[] = "\n   \t-1234hjghj78978";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}