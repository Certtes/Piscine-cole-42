# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 21:39:08 by tbourrec          #+#    #+#              #
#    Updated: 2022/08/29 21:39:13 by tbourrec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_atoi.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

.c.o:
		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		gcc -Wall -Wextra -Werror ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
