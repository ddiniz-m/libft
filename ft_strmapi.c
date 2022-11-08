/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:08:09 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/08 17:22:28 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *buff;
	
	buff = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (*s != '\0')
	{
		*buff = (char)f(ft_strlen(s), *s);
	}
	return(buff);
}

int main()
{
	
}