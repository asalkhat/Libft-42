/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:41:29 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/28 10:45:00 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	if (s1 == s2)
		return (0);
	ptr = (const unsigned char *)s1;
	ptr1 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptr1[i])
			return (ptr[i] - ptr1[i]);
		i++;
	}
	return (0);
}
