/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:24:28 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:44:20 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int main(int argc, char *argv[])
{
  int i;
  int j;

  i = 1;
  while (i < argc)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
      ft_putchar(argv[i][j]);
      j++;
    }
    ft_putchar('\n');
    i++;
  }
  return(0);
}