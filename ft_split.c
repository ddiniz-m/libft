/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:58:22 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/08 11:44:02 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
} */

int	counter(char const *s, int c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != c && s[i] != '\0')
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

char	*make_temp(int i, char const *s, char c)
{
	char	*temp;

	temp = (char *)malloc(((i + 1) * sizeof(s)));
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
	buff = (char **)malloc((count + 1) * sizeof(char *));
	if (!buff)
		return (0);
	while (j < count)
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
#include <unistd.h>
int main()
{
	int i = 0;
	char str[] = "dajdhaoidhaoiwhdoi ahwoihdoiawh";
	char c = 'z';
	int j = counter(str, c);
	char **buff = ft_split(str, c);
	char **tabstr;
	while (i <= j)
	{
		printf("s: %s\n", buff[i]);
		i++;
	}
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