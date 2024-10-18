/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:32:05 by jonathro          #+#    #+#             */
/*   Updated: 2024/10/18 03:08:03 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_print_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_ft(int *nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_sqrt(int nb);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
char *ft_strdup(const char *src);
int *ft_range(int min, int max);

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

int main(void)
{
  ft_print_alphabet();
  printf("\n");
  ft_print_numbers();
  printf("\n");
  ft_is_negative(9);
  printf("\n");

  int n = 21;
  ft_ft(&n);
  printf("Value of the number after call the function ft_ft: %d\n", n);

  int a = 555;
  int b = 888;
  ft_swap(&a, &b);
  printf("Values after call the function ft_swap: A = %d B = %d\n", a, b);

  int div;
  int mod;
  int a_div = 123;
  int b_mod = 2;
  ft_div_mod(a_div, b_mod, &div, &mod);
  printf("Value of A divided by B = %d\n", div);
  printf("Value of A module by B = %d\n", mod);

  printf("The factorial is %d\n", ft_iterative_factorial(12));
  
  printf("The factorial is %d\n", ft_recursive_factorial(12));

  printf("The square root is %d\n", ft_sqrt(100));

  ft_putstr("Hello\n");

  printf("%d\n", ft_strlen("Hello"));

  printf("%d\n", ft_strcmp("Hello", "Iello"));

  char *test_str = "This is a test string";
  char *duplicated_str = ft_strdup(test_str);

  if (duplicated_str == NULL)
  {
    printf("Memory allocation failed. Unable to duplicate string.\n");
  } 
  else
  {
    printf("Original string: %s\n", test_str);
    printf("Duplicated string: %s\n", duplicated_str);
    free(duplicated_str);
  }

      int min = 5;
    int max = 10;

    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("Returned NULL pointer. Invalid range.\n");
    }
    else
    {
      printf("Generated range between %d and %d: ", min, max);
      for (int i = 0; i < max - min; i++)
      {
        printf("%d ", result[i]);
      }
      printf("\n");
      free(result);
    }
}