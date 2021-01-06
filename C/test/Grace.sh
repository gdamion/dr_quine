# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Grace.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 11:07:39 by gdamion-          #+#    #+#              #
#    Updated: 2021/01/06 11:07:41 by gdamion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/env bash
clang -Wall -Wextra -Werror -o ./src/Grace/Grace ./src/Grace/Grace.c
cd ./src/Grace/
./Grace
cd ../..
diff ./src/Grace/Grace.c ./src/Grace/Grace_kid.c
