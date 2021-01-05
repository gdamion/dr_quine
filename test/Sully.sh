#!/usr/bin/env bash
clang -Wall -Wextra -Werror ./src/Sully/Sully.c -o ./src/Sully/Sully
cd ./src/Sully/
./Sully
cd ../..
diff ./src/Sully/Sully.c ./src/Sully/Sully_5.c
diff ./src/Sully/Sully_5.c ./src/Sully/Sully_4.c
diff ./src/Sully/Sully_4.c ./src/Sully/Sully_3.c
diff ./src/Sully/Sully_3.c ./src/Sully/Sully_2.c
diff ./src/Sully/Sully_1.c ./src/Sully/Sully_0.c
