/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:39:58 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/24 18:55:46 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include<stdlib.h>

//t_list *plus1(t_list *elem)
//{
//    t_list *list = ft_lstnew(elem->content, elem->content_size);
//    int i = -1;
//    while (((char*)list->content)[++i] != '\0')
//        ((char*)list->content)[i] = 'A';
//    return (list);
//}


int main(void)
{
    
//    char dst1[10] = "Hello";
//    char dst2[10] = "Hello";
//    char src[10] = "world";
//
//    int size = 10;
//
//    int i = ft_strlcat(dst1, src, size);
//    int j = strlcat(dst2, src, size);
//    printf("%s\n%i\n", dst1, i);
//    printf("%s\n%i\n", dst2, j);

//    t_list *list = ft_lstnew("Hello", 6);
//    list->next = ft_lstnew("World", 6);
    
//    t_list *list = NULL;
//    ft_lstadd(&list, ft_lstnew("Hello", 6));
//    ft_lstadd(&list, ft_lstnew("WORLD", 6));
//
//    printf("%s\n%s\n%p\n\n", list->content, list->next->content, list->next->next);
//
//    t_list *newl = ft_lstmap(list, &plus1);
//    printf("%s\n%s\n%p\n\n", newl->content, newl->next->content, newl->next->next);

    char *str = (char*)malloc(15);
//    ft_strlcat(str, "", 15);
//    ft_strlcat(str, "lorem ipsum", 15);
    memset(str, 'r', 6);
    str[11] = 'q';
    ft_strlcat(str, "lorem", 15);
    write(1, str, 15);
    
    
    return (0);
}

