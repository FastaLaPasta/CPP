NAME = more_brainz
HEADER = Zombie.hpp
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Zombie.cpp zombieHorde.cpp main.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${OBJS}

%.o : %.cpp ${HEADER}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re