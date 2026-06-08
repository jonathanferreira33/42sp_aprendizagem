/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:22:21 by jonathfe          #+#    #+#             */
/*   Updated: 2026/04/03 17:13:13 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.f>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	n;
	n = 'N';

	char	p;
	p = 'P';	

	if(n < 0)
	{
		write(1, &n, 1);
	}
	else {
		write(1, &p, 1);
	}
}