/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:05:40 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:43:34 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_alphabet(void)
{
  int i;

  i = 97;
  while (i <= 122)
  {
    ft_putchar(i);
    i++;
  }
}