# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/06 15:38:14 by tmokoena          #+#    #+#              #
#    Updated: 2019/06/25 15:19:45 by tmokoena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRS		= 	*.c 
FLG		=	-Wextra -Werror -Wall -c
NAME	= 	libft.a
OBJ		= 	*.o
all: $(NAME)

$(NAME):
	gcc $(FLG) $(SRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all
