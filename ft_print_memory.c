/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 04:24:19 by ksinger           #+#    #+#             */
/*   Updated: 2023/08/10 04:25:55 by ksinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef unsigned char byte_t;

void	put_hexa(void *addr)
{
	byte_t	*ptrByte;
	int 	i;
		
	i = 7;
	ptrByte = (byte_t *) &addr;
	while (i >= 0)
	{
		byteInHex(*(ptrByte + i));
		--i;
	}
	ft_putchar(':');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size == 1)
		return (addr);
	put_hexa(addr);
	printContentHex(addr, size);
	printContentDot(addr, size);
	return (addr);
}