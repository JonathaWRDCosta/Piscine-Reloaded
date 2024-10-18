/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:50:07 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:43:44 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_is_negative(int n)
{
  if (n < 0)
  {
    ft_putchar('N');
  }
  else
  {
    ft_putchar('P');
  }
}