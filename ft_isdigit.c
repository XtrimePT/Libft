/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:04:20 by joacorre          #+#    #+#             */
/*   Updated: 2022/02/20 15:01:16 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit(int arg)
{
	if ((arg >= 48 && arg <= 57))
		return (1);
	return (0);
}

/*
int main()
{
	char c = 'f';
	printf("%d", ft_isdigit(c));
	return 0;
}
*/