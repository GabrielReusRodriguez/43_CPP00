NAME	=	phonebook

CPPFLAGS	+=	-Wall -Werror -Wextra -std=c++98 -MMD -MP

SRC		=	PhoneBook	\
			Contact

HDR		=	PhoneBook.hpp	\
			Contact.hpp

SRCS	=	$(addsuffix .c, ${SRC})
OBJS	=	$(addsuffix .o, ${SRC})
DEPS	=	$(addsuffix .d, ${SRC})

all: ${NAME}

${NAME}: ${OBJS}
	c++ ${CPPFLAGS} ${OBJS} -o ${NAME}

%.o:%.cpp Makefile
	c++	${CPPFLAGS} -c $< -o $@

-include ${DEPS}

.PHONY	= all clean fclean re