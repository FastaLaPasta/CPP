NAME = 28B
HEADERS = Bureaucrat.hpp AForm.hpp
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CPPFLAGS} -o ${NAME} ${SRCS}

%.o: %.cpp ${HEADERS}

clean:
	rm -rf ${OBJS}
	rm -rf *_shrubbery

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re