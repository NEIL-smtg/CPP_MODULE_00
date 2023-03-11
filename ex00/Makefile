NAME		=	megaphone
FILES		=	megaphone
SRCS		=	$(addsuffix .cpp, $(FILES))
OBJS		=	$(addsuffix .o, $(FILES))
GCC			=	c++
FLAGS		=	-Wall -Werror -Wextra -std=c++98 -pedantic
RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	make clean
	$(RM) $(NAME)

re: fclean all