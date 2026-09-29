/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:42:06 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 14:58:51 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	ptr = (unsigned char *)dest;
	ptr1 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (dest);
}
