NAME = Intern
HEADERS = Bureaucrat.hpp AForm.hpp
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp Intern.cpp
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