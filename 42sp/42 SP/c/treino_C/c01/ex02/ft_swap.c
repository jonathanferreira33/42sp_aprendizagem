/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 20:12:07 by jonathfe          #+#    #+#             */
/*   Updated: 2026/04/07 19:39:54 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	num_a;

	num_a = *a;
	*a = *b;
	*b = num_a;
}

#include<stdio.h>
int main(void)
{
	int	num_a = 1;
	int	num_b = 33;

	ft_swap(&num_a, &num_b);
	printf("a: %d\t b: %d", num_a, num_b);
}
