/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:02:56 by jonathfe          #+#    #+#             */
/*   Updated: 2026/04/03 17:15:16 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.f>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char    c;
	c = '0';
	int	contador = 0;

	while (contador < 10)
	{
		write(1, &c, 1);
		c++;
		contador++;
	}
}