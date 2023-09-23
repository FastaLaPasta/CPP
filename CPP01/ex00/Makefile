NAME = brainz
HEADER = Zombie.hpp
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Zombie.cpp  randomChump.cpp newZombie.cpp main.cpp
OBJS = ${SRCS:%.cpp=%.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${OBJS}

%.o : %.cpp ${HEADER}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re