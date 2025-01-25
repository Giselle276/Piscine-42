/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:35:29 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/08/27 12:51:39 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str;

	str = argv[1];
	if (argc != 2)
		write(1, "Error\n", 6);
	else
		ft_putstr(str);
	return (0);
}*/
