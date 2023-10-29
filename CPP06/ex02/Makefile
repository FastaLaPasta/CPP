NAME = identify
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-unused-variable
SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp
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