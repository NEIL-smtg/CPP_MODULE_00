NAME		=		phonebook
FILES		=		main PhoneBook Contact
OBJS_DIR	=		objs/
SRCS_DIR	=		./
SRCS		=		$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(FILES)))
OBJS		=		$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
GPP			=		c++
FLAGS		=		-Wall -Werror -Wextra -std=c++98 -pedantic
RM			=		rm -rf

all: 
	@mkdir -p $(OBJS_DIR)
	@make $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@$(GPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(GPP) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re: fclean all