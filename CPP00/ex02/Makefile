NAME	= restore
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRC 	= Account.cpp tests.cpp
			
OBJ		= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) 
		c++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@ 

clean :
		@rm -f $(OBJ)


fclean : clean
		@rm -f $(NAME)


re : fclean all

.PHONY: all clean fclean re	
