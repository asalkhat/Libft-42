/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalkhat <asalkhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:43:29 by asalkhat          #+#    #+#             */
/*   Updated: 2026/09/15 15:00:53 by asalkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c)
			|| (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*copyword(const char *s, int start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	i = 0;
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	fillmalloc(char **result, const char *s, char c)
{
	int	i;
	int	start;
	int	index;

	i = 0;
	start = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[index] = copyword(s, start, i - start);
		if (result[index] == NULL)
			return (index);
		index++;
	}
	return (index);
}

static void	freesplit(char **result, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		count;
	int		index;

	count = countwords(s, c);
	ans = malloc(sizeof(char *) * (count + 1));
	if (ans == NULL)
		return (NULL);
	index = fillmalloc(ans, s, c);
	if (index != count)
	{
		freesplit(ans, index);
		return (NULL);
	}
	ans[index] = NULL;
	return (ans);
}
