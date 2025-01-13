NAME = myOrthClass

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Fixed.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Fixed.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
