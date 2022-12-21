/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:58:54 by apoure            #+#    #+#             */
/*   Updated: 2022/12/12 12:16:13 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc (sizeof(*new) * 1);
	if (!new)
		return (NULL);
	new->content = content;
	new->next = (NULL);
	return (new);
}

/*int		main(void)
{
	t_list	*new_car;
	char	*str;

	str = "coucou";
	new_car = ft_lstnew((void *)str);
	printf ("content :%s\n", (char *)new_car->content);
	printf ("next: %p\n", new_car->next);
	free(new_car);
}*/
