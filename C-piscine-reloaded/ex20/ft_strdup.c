/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguerra- <eguerra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:53:53 by eguerra-          #+#    #+#             */
/*   Updated: 2024/06/18 20:07:10 by eguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_putchar(char c);

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(int argc, char *argv[])
{
	char	*source;
	char	*duplicate;

	if (argc < 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	source = argv[1];
	duplicate = ft_strdup(source);
	if (duplicate == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("Original: %s\n", source);
	printf("Duplicate: %s\n", duplicate);
	free(duplicate);
	return (0);
}
*/
