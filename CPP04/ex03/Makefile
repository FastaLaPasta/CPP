NAME = final_mother_furer_fantasy
HEADER = AMateria.hpp Character.hpp ICharacter.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
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