/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguerra- <eguerra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:33:31 by eguerra-          #+#    #+#             */
/*   Updated: 2024/06/16 18:33:38 by eguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	b;

	b = 'a';
	while (b <= 'z')
	{
		ft_putchar(b);
		b++;
	}
}

/*
int	main()
{
	ft_print_alphabet();
	return(0);
}
*/
