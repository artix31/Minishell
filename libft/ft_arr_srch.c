/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_srch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amashhad <amashhad@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:27:15 by amashhad          #+#    #+#             */
/*   Updated: 2025/04/09 08:18:24 by amashhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//searches the array, and returns the first occurance of str in it
//returns it disregarding index (starts at 1)
//returns (-1) on error
//MUST SEND NULL TERMINATED ARRAY!!!!!
int	ft_arr_srch(char *str, char **arr)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (!str || !arr)
		return (-1);
	size = ft_arrlen(arr);
	while (i < size)
	{
		if (ft_strncmp(arr[i], str, ft_strlen(str)) == 0)
			break ;
		i++;
	}
	if (arr[i] == NULL)
		return (0);
	else
		return (i + 1);
}
