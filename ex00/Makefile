NAME 		= 	megaphone

CPPFLAGS	+=	-Wall -Werror -Wextra -std=c++98  -MMD -MP
SRC			=	megaphone


SRCS		= $(addsuffix .c, $(SRC))
OBJS		= $(addsuffix .o, ${SRC})
DEPS		= $(addsuffix .d, ${SRC})

all: ${NAME}

${NAME} : ${OBJS}
	c++ ${CPPFLAGS} ${OBJS} -o ${NAME}

%.o : %.cpp Makefile
	c++ ${CPPFLAGS} -c $< -o $@


clean:
	rm ${OBJS}
	rm ${DEPS}

fclean: clean
	rm ${NAME}

re: fclean all

-include ${DEPS}

.PHONY: all clean fclean re