NAME		=	phonebook
FILES		=	Main PhoneBook Contact
OBJS_DIR	=	objs/
SRCS_DIR	=	./
SRCS		=	$(addsuffix .cpp, $(FILES))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
CPP			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -pedantic
RM			=	-rm -rf

all:
	mkdir -p $(OBJS_DIR)
	make $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR)%.o:$(SRCS_DIR)%.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all