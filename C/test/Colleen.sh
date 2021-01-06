# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Colleen.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 11:07:27 by gdamion-          #+#    #+#              #
#    Updated: 2021/01/06 11:07:28 by gdamion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/env bash
clang -Wall -Wextra -Werror -o ./src/Colleen/Colleen ./src/Colleen/Colleen.c
./src/Colleen/Colleen > ./src/Colleen/tmp_Colleen
diff ./src/Colleen/tmp_Colleen ./src/Colleen/Colleen.c
