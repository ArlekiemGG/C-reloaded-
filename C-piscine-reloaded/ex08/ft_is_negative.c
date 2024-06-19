/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguerra- <eguerra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:57:21 by eguerra-          #+#    #+#             */
/*   Updated: 2024/06/16 18:57:30 by eguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
		ft_putchar(neg);
	else
		ft_putchar(pos);
}
/*
int	main()
{
	ft_is_negative(5);
	ft_putchar('\n');
	ft_is_negative(-3);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	return(0);
}
*/
