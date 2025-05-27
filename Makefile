# Derleyici ve bayraklar
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Hedef dosya
NAME = game

# Kaynak dosyalar
SRCS = main.cpp Archer.cpp Character.cpp # Warrior.cpp Wizard.cpp

# Nesne dosyalar
OBJS = $(SRCS:.cpp=.o)

# Varsayılan hedef
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Temizlik
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Yeniden oluştur
re: fclean all

# Sık kullanılan
.PHONY: all clean fclean re
