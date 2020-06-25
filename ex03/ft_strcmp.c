/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:16:46 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/25 08:55:16 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int value = 2;

    while(value == 2)
    {
        if(s1[i] > s2[i])
        {
            value = 1;
        }
        else if(s1[i] < s2[i])
        {
            value = -1;
        }
        else
        {
            i++;
        }
    }

    return(value);
}
