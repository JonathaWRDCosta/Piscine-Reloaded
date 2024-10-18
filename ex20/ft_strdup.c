/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 02:54:07 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:44:38 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *src)
{
  char *new_str;
  int i;

  i = 0;
  while (src[i] != '\0')
  {
    i++;
  }

  new_str = (char *)malloc(sizeof(char) * (i + 1));

  if (new_str == NULL)
  {
    return (NULL);
  }

  i = 0;
  while (src[i] != '\0')
  {
    new_str[i] = src[i];
    i++;
  }
  new_str[i] = '\0';

  return (new_str);
}