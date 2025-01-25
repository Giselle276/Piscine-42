/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:18:05 by gmaccha-          #+#    #+#             */
/*   Updated: 2024/08/19 10:34:18 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("Valor de a antes del cambio:%d\n", a);
	printf("Valor de b antes del cambio:%d\n", b);
	ft_swap(&a, &b);
	printf("Valor de a después del cambio:%d\n", a);
	printf("Valor de b después del cambio:%d\n", b);
	return (0);
}*/
