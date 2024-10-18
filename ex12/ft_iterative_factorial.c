/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 04:17:47 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:43:58 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
  int f;

  f = 1;
  if (nb < 0)
  {
    return(0);
  }
  while (nb > 1)
  {
    f *= nb;
    nb--; 
  }
  if (f < 0)
  {
    return (0);
  }
  return(f);
}