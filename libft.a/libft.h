/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:01:02 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/06 21:01:57 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

int	ft_isalpha(int	a);
int	ft_isdigit(int	a);
int	ft_isalnum(int	a);
int	ft_isascii(int	a);
int	ft_isprint(int	a);
int	ft_strlen(char *str);
void	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);


#endif

//sort by datatype