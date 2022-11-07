/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:54:21 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:18:21 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*buff;

	i = 0;
	buff = (char *)s;
	buff = malloc(len * sizeof(char));
	while (i <= (int)len)
	{
		buff[i] = s[start];
		start++;
		i++;
	}
	return ((char *)buff);
}

/* int	main()
{
	char str[] = "Let's go to the Grandline";
	printf ("%s\n", ft_substr(str, 16, 9));
	return(0);
} */
