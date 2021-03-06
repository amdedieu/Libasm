/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdedieu <amdedieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:21:31 by amdedieu          #+#    #+#             */
/*   Updated: 2021/03/10 14:22:03 by amdedieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libasm.h"

/*void            check_ft_strcmp()
{
    char        *s1;
    char        *s2;

    printf("\n\t\t ----- FT_STRCMP -----\n\n");

    printf("s1 -> '%s' : s2 -> '%s'\n", "Bonsoir", "Bonsoir");
    printf("   strcmp: %d\n", strcmp("Bonsoir", "Bonsoir"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("Bonsoir", "Bonsoir"));

    printf("s1 -> '%s' : s2 -> '%s'\n", "Z", "A");
    printf("   strcmp: %d\n", strcmp("Z", "A"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("Z", "A"));

    printf("s1 -> '%s' : s2 -> '%s'\n", "A", "Z");
    printf("   strcmp: %d\n", strcmp("A", "Z"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("A", "Z"));

    printf("s1 -> '%s' : s2 -> '%s'\n", "Bonjoir", "Bonsoir");
    printf("   strcmp: %d\n", strcmp("Bonjoir", "Bonsoir"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("Bonjoir", "Bonsoir"));

    printf("s1 -> '%s' : s2 -> '%s'\n", "Bonso", "Bonsoir");
    printf("   strcmp: %d\n", strcmp("Bonso", "Bonsoir"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("Bonso", "Bonsoir"));
    
    printf("s1 -> '%s' : s2 -> '%s'\n", "Bonsoir", "Bonso");
    printf("   strcmp: %d\n", strcmp("Bonsoir", "Bonso"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("Bonsoir", "Bonso"));

    printf("s1 -> '%s' : s2 -> '%s'\n", "", "Bonsoir");
    printf("   strcmp: %d\n", strcmp("", "Bonsoir"));
    printf("ft_strcmp: %d\n\n", ft_strcmp("", "Bonsoir"));

    printf("s1 -> '%s' : s2 -> '%s'\n", "Bonsoir", "");
    printf("   strcmp: %d\n", strcmp("Bonsoir", ""));
    printf("ft_strcmp: %d\n\n", ft_strcmp("Bonsoir", ""));

    printf("s1 -> '%s' : s2 -> '%s'\n", "", "");
    printf("   strcmp: %d\n", strcmp("", ""));
    printf("ft_strcmp: %d\n\n", ft_strcmp("", ""));

    printf("\n\t\t ----- END -----\n\n");
}*/

void			check_ft_write()
{
	int ret;
	int ft_ret;
	char *str;

	printf("\n\t\t ----- FT_WRITE -----\n\n");
	str = "Bonsoir a toute et a tous";
	printf("string : '%s'\n", str);
	ret = write(1, str, ft_strlen(str));
	printf(":    write returned : %d\n", ret);
	ft_ret = ft_write(1, str, ft_strlen(str));
	printf(": ft_write returned : %d\n\n", ft_ret);

	str = "";
	printf("string : '%s'\n", str);
	ret = write(1, str, ft_strlen(str));
	printf(":    write returned : %d\n", ret);
	ft_ret = ft_write(1, str, ft_strlen(str));
	printf(": ft_write returned : %d\n\n", ft_ret);

	printf("--> Error with bad fd\n");	
	str = "Ceci est un test";
	printf("string : '%s'\n", str);
	errno = 0;
	ret = write(489, str, ft_strlen(str));
	printf(":    write returned : %d : %s -> %d\n", ret, strerror(errno), errno);
	errno = 0;	
	ft_ret = ft_write(489, str, ft_strlen(str));
	printf(": ft_write returned : %d : %s -> %d\n\n", ft_ret, strerror(errno), errno);
	
	printf("\n\t\t ----- END -----\n\n");
}

int		main(void)
{
	check_ft_write();
	//printf("%d\n", ft_strcmp(str, str1));
	//printf("original : %d\n", strcmp(str, str1));
	return 0;
}
