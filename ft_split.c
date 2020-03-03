/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:16:36 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/21 00:40:40 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		words;
	int		is_word;

	i = 0;
	words = 0;
	is_word = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			words++;
		}
		if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (words);
}

int		ft_count_letters(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ptr;
	int		words;
	int		w;
	int		word_len;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	i = 0;
	w = 0;
	while (s[i] != '\0' && w < words)
	{
		while (s[i] == c)
			i++;
		word_len = ft_count_letters(s + i, c);
		ptr[w] = ft_substr(s + i, 0, word_len);
		i = i + word_len;
		w++;
	}
	ptr[w] = 0;
	return (ptr);
}
