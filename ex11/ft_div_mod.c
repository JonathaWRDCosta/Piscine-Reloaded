/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 04:03:53 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:43:54 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}