NAME	=	Moar_brainz!

CC		=	clang++ -std=c++98
CFLAGS	=	-Wall -Werror -Wextra

HEADER	=	Zombie.hpp
SRC		=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp
			
OBJ_DIR :=	./obj
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

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
			
$(OBJ_DIR)/%.o		:	%.cpp ${HEADER} Makefile
					$(CC) $(CFLAGS) -c $< -o $@

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
