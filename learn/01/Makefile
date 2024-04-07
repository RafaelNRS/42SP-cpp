# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 00:01:12 by ranascim          #+#    #+#              #
#    Updated: 2024/03/30 16:24:26 by ranascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = favorite_number
CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f
SRC_NAME = favorite_number.cpp

OBJ_NAME = $(SRC_NAME:.cpp=.o)
OBJ = $(OBJ_NAME)

all :$(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)
	
fclean : clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
