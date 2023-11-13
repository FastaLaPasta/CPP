NAME = span
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRCS = main.cpp Span.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re