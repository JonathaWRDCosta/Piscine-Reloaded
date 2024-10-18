/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 03:02:29 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 17:45:39 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return NULL;
    }

    int size = max - min;
    int *range = (int *)malloc(sizeof(int) * size);

    if (range == NULL)
    {
        return NULL;
    }

    int i = 0;
    while (i < size)
    {
        range[i] = min + i;
        i++;
    }

    return range;
}