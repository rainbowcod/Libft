/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:10:07 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/15 14:57:12 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *str, char c);
static char **str_split(const char *str, char *res, char c);

char **ft_split(char const *s, char c)
{
	int	i;
	int	k;
	int	count;
	char	**res;

	i = 0;
	k = 0;
	count = wordcount(s, c) + 1;
	res = ft_calloc(count, sizeof(char *));
	res = str_split(s, *res, c);
	return (res);
}

static int	wordcount(char  const *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}
// Count the amount of words in the

static char **str_split(const char *str, char *res, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			res[k] = '\0';
			// res[k] = '\n';
		}
		else 
			res[k] = str[i];
		k++;
		i++;
	}
	return (&res);
}

int	main(void)
{
	const char	str[] = "Hello!there!Bitch";
	char c = '!';
	printf("%s\n", *ft_split(str, c));
	return (0);
}

