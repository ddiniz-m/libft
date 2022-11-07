/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:44:01 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:18:15 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}

/* int main()
{
	char str[] = "Hello";
	ft_bzero(str, 2);
	printf("%s\n", str);
} */