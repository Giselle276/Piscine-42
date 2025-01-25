/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:10:43 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/08/21 12:26:51 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*des;
	char	*src;
	unsigned int	c;

	des = argv[1];
	src = argv[2];
	c = atoi (argv[3]);
	if (argc != 4)
	{
		write (1, "Error", 5);
	}
	else
	{
		printf("Resultado: %s", ft_strncpy(des, src, c));
	}
	return (0);
}*/
