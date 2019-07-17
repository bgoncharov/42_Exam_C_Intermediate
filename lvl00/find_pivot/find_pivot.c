/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:14:08 by bogoncha          #+#    #+#             */
/*   Updated: 2019/07/17 12:23:36 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_pivot(int *arr, int n)
{
	int leftsum;
	int totalsum;
	int i;

	i = 0;
	leftsum = 0;
	totalsum = 0;

	while (i < n)
	{
		totalsum += arr[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		leftsum += arr[i];
		if (leftsum == totalsum)
			return (i);
		totalsum -= arr[i];
		i++;
	}
	return (-1);
}

#include <stdio.h> //DELETE

int main()
{
	int arr[6] = {1,2,3,4,0,6};
	printf("%d\n", find_pivot(arr, 6));
	
	return (0);
}
