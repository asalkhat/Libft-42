/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:46:54 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 15:02:03 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	h;

	j = 0;
	while (j < size && dest[j] != '\0')
		j++;
	i = 0;
	while (src[i] != '\0')
		i++;
	if (j == size)
		return (size + i);
	h = 0;
	while (src[h] != '\0' && j + h + 1 < size)
	{
		dest[j + h] = src[h];
		h++;
	}
	dest[j + h] = '\0';
	return (j + i);
}
