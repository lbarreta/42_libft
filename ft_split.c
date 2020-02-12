/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:16:36 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/10 20:32:06 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

int		ft_count_letters(char const *s, char c, int i)
{
	int words;
	int letters;

	words = 0;
	letters = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		if (words == i)
		{
			while (s[i] != c && s[i] != '\0')
			{
				letters++;
				i++;
			}
			letters++;
			return (letters);
		}
		i++;
	}
	letters++;
	return (letters);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ptr;
	int		words;
	int		letters;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * words)))
		return (NULL);
	i = 0;
	while (i <= words)
	{
		letters = ft_count_letters(s, c, i);
		if (!(ptr[i] = (char *)malloc(sizeof(char) * letters)))
			return (NULL);
		i++;
	}
	i = ft_strlen((char*)s) - 1;
	while (words >= 0)
	{
		letters = ft_count_letters(s, c, i);
		ptr[words][letters] = '\0';
		while (letters >= 0)
		{
			while (s[i] == c)
				i--;
			ptr[words][letters] = s[i];
			letters--;
			i--;
		}
		words--;
	}
	return (ptr);
}
