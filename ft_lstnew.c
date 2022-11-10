/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:28 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/10 18:06:01 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;
	char *str;

	str = content;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	
	head->content = &str;
	head->next = NULL;
	return (head);
}

int main()
{
	char *str = "Hello";
	printf("%d\n", ft_lstnew(str));
}