/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:28:23 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/08/21 13:07:57 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str;

	str = argv[1];
	if (argc != 2)
	{
		write (1, "Error\n", 6);
	}
	else
	{
		printf("Resultado: %d", ft_str_is_numeric(str));
	}
	return (0);
}*/
