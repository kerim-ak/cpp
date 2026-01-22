NAME = Zombie
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = \
	Zombie.cpp \
	randomChump.cpp \
	newZombie.cpp \
	main.cpp
	
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re