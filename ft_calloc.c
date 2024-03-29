/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 06:49:30 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/21 07:02:44 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*
int main()
{
    int i;
	int *ptr = ft_calloc(3, 4);
	
	i = 0;
	while (i < 3)
	{
	    printf("%d\n", ptr[i]);
	    i++;
	}
	return 0;
}
*/