/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:47:40 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:44:05 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
  int i;
  int result;

  i = 1;
  result = 0;
  while (i * i <= nb)
  {
    if (i * i == nb)
    {
      result = i;
    }
    i++;
  }
  return (result);
}