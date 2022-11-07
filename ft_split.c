/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:58:22 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/07 17:29:45 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(char const *s, int c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != c)
		words++;
	while (s[i] != '\0')
	{
		i++;
		while (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				words++;
			i++;
		}
	}
	return (words);
}

int	word_size(char s1, char c)
{
	int	i;

	i = 0;
	while (s1 != c)
	{
		i++;
		s1++;
	}
	return (i);
}

char	*make_temp(int i, const char *s, char c)
{
	char	*temp;

	temp = (char *)malloc((i + 1) * sizeof(char));
	if (!temp)
		return (0);
	i = 0;
	while (*s && *s != c)
		temp[i++] = *s++;
	temp[i] = '\0';
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**buff;

	j = 0;
	count = counter(s, c);
	buff = (char **)malloc((counter(s, c) + 1) * sizeof(char *));
	if (!buff)
		return (0);
	while (*s != '\0')
	{
		i = 0;
		while (*s && *s == c && j != count)
			s++;
		i = word_size(*s, c);
		if (i > 0)
		{
			buff[j++] = make_temp(i, s, c);
			s = s + ft_strlen(make_temp(i, s, c));
		}
		else
			buff[j++] = '\0';
	}
	return (buff);
}

/* #include <stdio.h>
int main()
{
	int i = 0;
	char str[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char c = 'i';
	int j = counter(str, c);
	char **buff = ft_split(str, c);
	while (i <= j)
	{
		printf("s: %s\n", buff[i]);
		i++;
	}
	return(0);
} */
/*
15: When it encounters "c" checks if the next character 
is not "c" and adds 1 to "words".If this condition is 
not true, it just keeps checking every character until
it finds another "c" that hasn't "c" as the next character

58: Create **buffer with enough memory for total number of
	words + \0;
63: Skips any instance of c in the beginning of the string
65: When it reaches a "word" counts how many characters it
	has --> i;
66: Condition in case there are no characters that are not
	"c";
68: Allocates the size of the first word (i) + 1 for \0;
69-63: Resets i so it can copy the word into temp and add /0
	at the end of the string;
74: Copies temp into the respective buff pointer;
*/