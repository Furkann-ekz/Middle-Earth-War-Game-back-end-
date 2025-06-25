CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = game

SRCS = main.cpp Archer.cpp Character.cpp Warrior.cpp Wizard.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	rm -rf $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re