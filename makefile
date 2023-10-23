# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:45:53 by f██████           #+#    #+#              #
#    Updated: 2023/10/23 15:16:16 by sshanmug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ft_*.c}
OBJS 	= ${SRCS:.c=.o}
HEAD	= libft.h 
CC		= cc  
CFLAGS	= -Wall -Werror -Wextra 
NAME 	= libft.a

.c.o:
	@${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	@ar -rcs ${NAME} ${OBJS}
all : ${NAME}

clean:
	@rm -f ${OBJS}

fclean : clean
	@rm -f ${NAME}

re: fclean all