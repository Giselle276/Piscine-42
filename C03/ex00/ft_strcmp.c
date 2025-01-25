/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:07:34 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/08/26 10:47:45 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3)
		write(1, "Error\n", 6);
	else
		printf("Resultado:%d", ft_strcmp(s1, s2));
	return (0);
}*/
