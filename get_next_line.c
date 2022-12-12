/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnextline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:51:26 by lex               #+#    #+#             */
/*   Updated: 2022/12/08 09:51:30 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

int *getnextline(int ft)
{
    static char *next_line;
    char        *buff;
    int         position;
    int         bytes;

    if(BUFFER_SIZE <= 0 || fd < 0 || fd > 10240)
        return (NULL);
    buff = NULL;
    position = ft_strrchr(next_line, '\n, 0');
}

int main()
{
    getnextline(4);
    return 0;
}