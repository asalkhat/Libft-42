/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:50:56 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 15:04:05 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	copy_string(const char *s, char *ptr,
		unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[start] != '\0')
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[j])
		j++;
	if (start >= j)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > (j - start))
		len = j - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = copy_string(s, ptr, start, len);
	ptr[i] = '\0';
	return (ptr);
}
