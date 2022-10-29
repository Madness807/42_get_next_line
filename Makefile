SRCS =		


OBJS =			${SRCS:.c=.o}

OBJS_BONUS =	${BONUS:.c=.o}

INCLUDES =		includes/

RM =			rm -f

CC =			gcc

NAME =			get_next_line.a

CFLAGS =		-Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

all:			${NAME}

${NAME}:		${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all clean fclean re
