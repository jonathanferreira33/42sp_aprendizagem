/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:00:03 by jonathfe          #+#    #+#             */
/*   Updated: 2026/04/03 17:15:23 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.f>

void    ft_print_reverse_alphabet(void);

void    ft_print_reverse_alphabet(void)
{
	char    c;
	c = 'z';
    int contador = 26;
    while (contador >= 0)
    {
		write(1, &c, 1);
        contador --;
    }
}