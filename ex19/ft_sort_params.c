/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:39:35 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:44:32 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int ft_strcmp(char *s1, char *s2)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
  {
    i++;
    j++;
  }
  return(s1[i] - s2[j]);
}


int main(int argc, char *argv[])
{
  int i;
  int j;
  char *temp;

  i = 1;
  while (i < argc -1)
  {
    j = i + 1;
    while (j < argc)
    {
      if (ft_strcmp(argv[i], argv[j]) > 0)
      {
        temp = argv[i];
        argv[i] = argv[j];
        argv[j] = temp;
      }
      j++;
    }
    i++;
  }
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
}