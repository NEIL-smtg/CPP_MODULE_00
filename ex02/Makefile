NAME		=	account
FILES		=	Account tests
OBJS_DIR	=	objs/
SRCS		=	$(addsuffix .cpp, $(FILES))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
GCPP		=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -pedantic
RM			=	rm -rf

all:
	mkdir -p $(OBJS_DIR)
	make $(NAME)

$(NAME):$(OBJS)
	$(GCPP) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR)%.o:./%.cpp
	$(GCPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all