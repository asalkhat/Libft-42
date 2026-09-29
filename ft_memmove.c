/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:42:32 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 14:59:12 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	ptr = (unsigned char *)dest;
	ptr1 = (const unsigned char *)src;
	if (ptr1 > ptr)
	{
		i = 0;
		while (i < n)
		{
			ptr[i] = ptr1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr[i] = ptr1[i];
		}
	}
	return (dest);
}
