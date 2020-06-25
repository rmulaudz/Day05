/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:57:25 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/24 09:17:50 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
    i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++	;
	}
	dest[i] = '\0';

	return dest;
}

int main(void)
{
	char ch1[] = "Ruddik Mulaudzi";
	char ch2[] = {};

	ft_strncpy(ch2, ch1, 6);

	printf("copied string is %s", ch2);

	return (0);
}
