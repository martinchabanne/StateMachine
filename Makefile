##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC_BASE =	src/Main.cpp	\
			src/state/DefaultState.cpp	\
			src/service/StateService.cpp	\
			src/interface/StateInterface.cpp

SRC =	$(SRC_BASE)

OBJ =	$(SRC_BASE:.cpp=.o)

NAME =	StateMachine

CFLAGS = -I./include -g

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ) -g -std=c++20 -Wall -Wextra -Werror

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
