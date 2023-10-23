NAME = form
HEADERS = Bureaucrat.hpp Form.hpp
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Bureaucrat.cpp Form.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${SRCS}

%.o: %.cpp ${HEADERS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re