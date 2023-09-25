NAME = polymorphe
HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${OBJS}

%.o: %.cpp ${HEADERS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re