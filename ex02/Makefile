CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

NAME=FIXED

SRC=main.cpp Fixed.cpp

OBJ_DIR=obj

OBJ=$(SRC:%.cpp=$(OBJ_DIR)/%.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:%.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all
