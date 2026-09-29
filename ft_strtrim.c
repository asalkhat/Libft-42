/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:50:17 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 15:03:53 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start_function(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;

	start = 0;
	while (s1[start])
	{
		i = 0;
		while (set[i])
		{
			if (s1[start] == set[i])
			{
				start++;
				break ;
			}
			i++;
		}
		if (set[i] == '\0')
			break ;
	}
	return (start);
}

static size_t	end_function(const char *s1, const char *set)
{
	size_t	end;
	size_t	i;

	if (s1[0] == '\0')
		return (0);
	end = ft_strlen(s1) - 1;
	while (end > 0)
	{
		i = 0;
		while (set[i])
		{
			if (s1[end] == set[i])
			{
				end--;
				break ;
			}
			i++;
		}
		if (set[i] == '\0')
			break ;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ans;
	size_t	start;
	size_t	end;
	size_t	i;

	start = start_function(s1, set);
	end = end_function(s1, set);
	if (start > end)
		end = start;
	ans = malloc(end - start + 2);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (start <= end && s1[start])
	{
		ans[i] = s1[start];
		i++;
		start++;
	}
	ans[i] = '\0';
	return (ans);
}
