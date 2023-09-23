NAME = sed_for_looser
HEADER = SedV2.hpp
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp SedV2.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${OBJS}

%.o : %.c ${HEADER}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re