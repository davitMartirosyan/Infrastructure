NAME = dashboard
CC = c++
CC_FLAGS = -I includes/ -std=c++11 #-Wall -Wextra -Werror
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)
HEADERS = $(wildcard includes/*.hpp)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	@$(CC) $(CC_FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all

.PHONNY: all fclean clean re
