/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:55:03 by ddiniz-m          #+#    #+#             */
/*   Updated: 2023/10/06 10:53:23 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/* int main()
{
	int i;
	
	i = 0;
	char str[] = "HELLO";
	
	while(str[i] != '\0')
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	return(0);
} */