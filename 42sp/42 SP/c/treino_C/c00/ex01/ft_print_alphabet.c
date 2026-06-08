/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:56:33 by jonathfe          #+#    #+#             */
/*   Updated: 2026/04/06 21:44:56 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.f>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char    c;
    
	c = 'a';

	int	contador = 0;
    while (contador <= 26)
    {
        
		write(1, &c, 1);
        contador ++;
    }
}
