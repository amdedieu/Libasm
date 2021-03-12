/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdedieu <amdedieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:21:19 by amdedieu          #+#    #+#             */
/*   Updated: 2021/03/12 00:19:01 by amdedieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

size_t	ft_strlen(char *str);
//char	*ft_strcpy(char *dest, const char	*src);
//int		ft_strcmp(const char *s1, const char *s2);
int * __errno_location(void);
ssize_t ft_write(int fd, const void *buf, size_t count);
