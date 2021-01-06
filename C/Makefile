# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/05 19:47:36 by gdamion-          #+#    #+#              #
#    Updated: 2021/01/06 10:49:05 by gdamion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG1_NAME = Colleen
PROG2_NAME = Grace
PROG3_NAME = Sully

CC = clang
FLAGS = -Wall -Werror -Wextra

OBJ_DIR = obj/
################# PROG1 #################
SRC_PROG1_DIR = ./src/$(PROG1_NAME)/
SRC_PROG1_LIST = $(PROG1_NAME).c
SRC_PROG1 = $(addprefix $(SRC_PROG1_DIR), $(SRC_PROG1_LIST))

OBJ_PROG1_DIR = $(addprefix $(OBJ_DIR), $(PROG1_NAME))/
OBJ_PROG1_LIST = $(patsubst %.c, %.o, $(SRC_PROG1_LIST))
OBJ_PROG1 = $(addprefix $(OBJ_PROG1_DIR), $(OBJ_PROG1_LIST))

TMP_PROG1_DIR = $(SRC_PROG1_DIR)
TMP_PROG1_LIST = tmp_Colleen
TMP_PROG1 = $(addprefix $(TMP_PROG1_DIR), $(TMP_PROG1_LIST))

EXE_PROG1 = $(addprefix $(SRC_PROG1_DIR), $(PROG1_NAME))
#######################################

################# PROG2 #################
SRC_PROG2_DIR = ./src/$(PROG2_NAME)/
SRC_PROG2_LIST = $(PROG2_NAME).c
SRC_PROG2 = $(addprefix $(SRC_PROG2_DIR), $(SRC_PROG2_LIST))

OBJ_PROG2_DIR = $(addprefix $(OBJ_DIR), $(PROG2_NAME))/
OBJ_PROG2_LIST = $(patsubst %.c, %.o, $(SRC_PROG2_LIST))
OBJ_PROG2 = $(addprefix $(OBJ_PROG2_DIR), $(OBJ_PROG2_LIST))

TMP_PROG2_DIR = $(SRC_PROG2_DIR)
TMP_PROG2_LIST = Grace_kid.c
TMP_PROG2 = $(addprefix $(TMP_PROG2_DIR), $(TMP_PROG2_LIST))

EXE_PROG2 = $(addprefix $(SRC_PROG2_DIR), $(PROG2_NAME))
#######################################

################# PROG3 #################
SRC_PROG3_DIR = ./src/$(PROG3_NAME)/
SRC_PROG3_LIST = $(PROG3_NAME).c
SRC_PROG3 = $(addprefix $(SRC_PROG3_DIR), $(SRC_PROG3_LIST))

OBJ_PROG3_DIR = $(addprefix $(OBJ_DIR), $(PROG3_NAME))/
OBJ_PROG3_LIST = $(patsubst %.c, %.o, $(SRC_PROG3_LIST))
OBJ_PROG3 = $(addprefix $(OBJ_PROG3_DIR), $(OBJ_PROG3_LIST))

TMP_PROG3_DIR = $(SRC_PROG3_DIR)
TMP_PROG3_LIST = Sully_0 Sully_1 Sully_2 Sully_3 Sully_4 Sully_5 Sully_0.c Sully_1.c Sully_2.c Sully_3.c Sully_4.c Sully_5.c
TMP_PROG3 = $(addprefix $(TMP_PROG3_DIR), $(TMP_PROG3_LIST))

EXE_PROG3 = $(addprefix $(SRC_PROG3_DIR), $(PROG3_NAME))
#######################################

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(EXE_PROG1) $(EXE_PROG2) $(EXE_PROG3)

################ PROG1 COMPILE #################
$(EXE_PROG1): $(OBJ_PROG1_DIR) $(OBJ_PROG1)
	@echo "\n$(PROG1_NAME): $(GREEN)Object files were created$(RESET)"
	@$(CC) $(FLAGS) $(OBJ_PROG1) -o $(EXE_PROG1)
	@echo "$(PROG1_NAME): $(GREEN)$(PROG1_NAME) executable was created!$(RESET)"

$(OBJ_PROG1_DIR):
	@mkdir -p $(OBJ_PROG1_DIR)
	@echo "$(PROG1_NAME): $(GREEN)$(OBJ_PROG1_DIR) folder was created!$(RESET)"

$(OBJ_PROG1_DIR)%.o : $(SRC_PROG1_DIR)%.c
	@$(CC) $(FLAGS) -c $(INC) $< -o $@
	@echo "$(GREEN).$(RESET)\c"
##############################################

################ PROG2 COMPILE #################
$(EXE_PROG2): $(OBJ_PROG2_DIR) $(OBJ_PROG2)
	@echo "\n$(PROG2_NAME): $(GREEN)Object files were created$(RESET)"
	@$(CC) $(FLAGS) $(OBJ_PROG2) -o $(EXE_PROG2)
	@echo "$(PROG2_NAME): $(GREEN)$(PROG2_NAME) executable was created!$(RESET)"

$(OBJ_PROG2_DIR):
	@mkdir -p $(OBJ_PROG2_DIR)
	@echo "$(PROG2_NAME): $(GREEN)$(OBJ_PROG2_DIR) folder was created!$(RESET)"

$(OBJ_PROG2_DIR)%.o : $(SRC_PROG2_DIR)%.c
	@$(CC) $(FLAGS) -c $(INC) $< -o $@
	@echo "$(GREEN).$(RESET)\c"
##############################################

################ PROG3 COMPILE #################
$(EXE_PROG3): $(OBJ_PROG3_DIR) $(OBJ_PROG3)
	@echo "\n$(PROG3_NAME): $(GREEN)Object files were created$(RESET)"
	@$(CC) $(FLAGS) $(OBJ_PROG3) -o $(EXE_PROG3)
	@echo "$(PROG3_NAME): $(GREEN)$(PROG3_NAME) executable was created!$(RESET)"

$(OBJ_PROG3_DIR):
	@mkdir -p $(OBJ_PROG3_DIR)
	@echo "$(PROG3_NAME): $(GREEN)$(OBJ_PROG3_DIR) folder was created!$(RESET)"

$(OBJ_PROG3_DIR)%.o : $(SRC_PROG3_DIR)%.c
	@$(CC) $(FLAGS) -c $(INC) $< -o $@
	@echo "$(GREEN).$(RESET)\c"
##############################################

clean:
	@rm -rf $(OBJ_DIR) $(TMP_PROG1) $(TMP_PROG2) $(TMP_PROG3)
	@echo "$(PROG1_NAME), $(PROG2_NAME), $(PROG3_NAME): $(RED)Temporal and object files were deleted$(RESET)"

fclean: clean
	@rm -f $(EXE_PROG1) $(EXE_PROG2) $(EXE_PROG3)
	@echo "$(PROG1_NAME), $(PROG2_NAME), $(PROG3_NAME): $(RED)All executables were deleted$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
