/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:10:41 by mhassani          #+#    #+#             */
/*   Updated: 2022/06/30 15:41:51 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	temp;

	i = 0;
	while (i < size - 1)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}

int main(void)
{
	int 	tab[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
