# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amdedieu <amdedieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/08 15:17:04 by amdedieu          #+#    #+#              #
#    Updated: 2021/03/08 17:37:52 by amdedieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME                =   libasm.a

CC                  =   gcc -Wall -Wextra -Werror

AS                  = nasm -f macho64

SRC            =      ft_strlen.s
INCLUDE             =   libasm.h

all: $(NAME)
$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
$(OBJ) : $(SRC)
		 $(AS) $< -o $@
 clean :
	rm -rf $(OBJ) $(OBJ_BONUS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY: all clean fclean re
