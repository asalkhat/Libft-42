/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:40:19 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 14:57:07 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	write_digits(char *str, long num, int i)
{
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		i--;
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		count;
	int		i;

	num = n;
	count = count_digits(num);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = count - 1;
	write_digits(str, num, i);
	if (n == 0)
		str[0] = '0';
	return (str);
}
