/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguerra- <eguerra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:36:27 by eguerra-          #+#    #+#             */
/*   Updated: 2024/06/19 19:36:48 by eguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_abs.h" // Incluimos el archivo de cabecera que define ABS

int main(void)
{
    int x = -10;
    int y = 20;
    int z = -5;

    // Calculamos los valores absolutos utilizando la macro ABS
    int abs_x = ABS(x);
    int abs_y = ABS(y);
    int abs_z = ABS(z);

    // Imprimimos los resultados
    printf("El valor absoluto de %d es %d\n", x, abs_x);
    printf("El valor absoluto de %d es %d\n", y, abs_y);
    printf("El valor absoluto de %d es %d\n", z, abs_z);

    return 0;
}
