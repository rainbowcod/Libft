/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:04:07 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/16 16:37:56 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int wordcount(char const *str, char c);
static char *copyword(const char *str, int	len);
static int	check(char **res, const char *s, int *i, char c);
static void	free_res(char **res, int idx);

char **ft_split(char const *s, char c)
{
	int	i;
	int	idx;
	int	count_col;
	char **res;

	i = 0;
	idx = 0;
	count_col = wordcount(s, c); // column of array
	// res = ft_calloc(count_col, sizeof(char *));
	res = (char **)malloc(sizeof(char *) * (count_col + 1));
	if (!res || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			// res[idx] = token(s, c, &i);
			if (!check(&res[idx], s, &i, c))
				return (free_res(res, idx - 1), NULL);
			idx++;
		}
		else
			i++;
	}
	res[idx] = NULL;
	return (res);
}

static int	check(char **res, const char *s, int *i, char c)
{
	int	tmp;
	
	tmp = *i;
	while (s[tmp] && s[tmp] != c)
		tmp++;
	res[0] = copyword(s + *i, tmp - *i);
	if (!res[0])
		return (0);
	*i = tmp;
	return (1);
}

static char *copyword(const char *str, int	len)
{
	char	*word;
	
	word = (char *)ft_calloc(len + 1, sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, len + 1);
	return (word);
}

//counts words in a column
static int wordcount(char const *str, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	if (str[i] != c)
	{	
		word++;
		i++;
	}
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			word++;
		i++;
	}
	return (word);
}

// counts, mallocs, and copies a token
// static char *token(char const *str, char c, int *i)
// {
// 	int	start;
// 	int	total;
// 	char	*word;
// 	start = *i;
// 	while (str[*i] && str[*i] != c)
// 		(*i)++;
// 	total = *i - start;
// 	word = copyword(str + *i, start - *i);
// 	if (!word)
// 		return (NULL);
// 	// ft_strlcpy(word, str + *i, total + 1);
// 	printf("This sum bullshit: %s\n", word);
// 	*i = start;
// 	return (word);
// }
// pointer arythmetics

static void	free_res(char **res, int idx)
{
	while (idx-- > 0)
		free(res[idx]);
	free(res);
}

// int	main(void)
// {
// 	char	*str = "Hello, there, Bitch";
// 	char	c = ',';
// 	char **line;

// 	line = ft_split(str , c);
// 	for (int i = 0; line[i]; i++)
// 	{
// 		printf("%s\n", line[i]); 
// 	}
// 	return (0);
// }
