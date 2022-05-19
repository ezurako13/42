/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakin <rakin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:42:08 by rakin             #+#    #+#             */
/*   Updated: 2022/02/16 15:50:23 by rakin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char    *ft_strupcase(char *str)
{
    while(*str != '\0')
    {   
        if(*str >=97 && *str <=122)
            *str -= 32;
        str++;
    }
    
    return (str);
}   
int main()
{
    char str[30] = "kucukharflerbuyukolsun";
    printf("%s",(ft_strupcase(str)));

    return (0);
}
