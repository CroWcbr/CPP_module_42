NAME	=	The_Job_Of_Your_Dreams

CC		=	clang++ -std=c++98
CFLAGS	=	-Wall -Werror -Wextra

HEADER	=	Account.hpp
SRC		=	test.cpp \
			Account.cpp

OBJ_DIR =	obj/
OBJ		=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

RM_DIR	=	rm -rf
RM_FILE	=	rm -f

#COLORS
C_NO	=	"\033[00m"
C_OK	=	"\033[32m"
C_GOOD	=	"\033[32m"

#DEBUG
SUCCESS	=	$(C_GOOD)SUCCESS$(C_NO)
OK		=	$(C_OK)OK$(C_NO)

all		:	$(NAME)

$(OBJ): 	| $(OBJ_DIR)	

$(OBJ_DIR):
			@mkdir -p $(OBJ_DIR)
			
$(OBJ_DIR)%.o	:	%.cpp ${HEADER} Makefile
					$(CC) $(CFLAG) -c $< -o $@

$(NAME)	:	$(OBJ) 
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
			@echo "\tCompiling...\t" [ $(NAME) ] $(SUCCESS)

clean	:
			@$(RM_DIR) $(OBJ_DIR)
			@echo "\tCleaning...\t" [ $(OBJ_DIR) ] $(OK)

fclean	:	clean
			@$(RM_FILE) $(NAME)
			@echo "\tDeleting...\t" [ $(NAME) ] $(OK)

re		:	fclean all

.PHONY	:	all, clean, fclean, re, test

test	: 	$(NAME)
			@/bin/echo "TEST=============================================================="
			@/bin/echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
			@/bin/echo -n "Megaphone : "
			@./$(NAME) "shhhhh... I think the students are asleep..."
			@/bin/echo
			@/bin/echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
			@/bin/echo -n "Megaphone : "
			@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
			@/bin/echo
			@/bin/echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
			@/bin/echo -n "Megaphone : "
			@./$(NAME)
			@/bin/echo "=================================================================="
	