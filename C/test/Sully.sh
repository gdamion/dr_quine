# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Sully.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 11:07:43 by gdamion-          #+#    #+#              #
#    Updated: 2021/01/06 12:51:03 by gdamion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/env bash
clang -Wall -Wextra -Werror ./src/Sully/Sully.c -o ./src/Sully/Sully
cd ./src/Sully/
./Sully
cd ../..

echo "Compare Sully.c and Sully_5.c"
diff ./src/Sully/Sully.c ./src/Sully/Sully_5.c
echo ""

echo "Compare Sully_5.c and Sully_4.c"
diff ./src/Sully/Sully_5.c ./src/Sully/Sully_4.c
echo ""

echo "Compare Sully_4.c and Sully_3.c"
diff ./src/Sully/Sully_4.c ./src/Sully/Sully_3.c
echo ""

echo "Compare Sully_3.c and Sully_2.c"
diff ./src/Sully/Sully_3.c ./src/Sully/Sully_2.c
echo ""

echo "Compare Sully_1.c and Sully_0.c"
diff ./src/Sully/Sully_1.c ./src/Sully/Sully_0.c
echo ""
echo "If nothing is shown, then files are identical"
