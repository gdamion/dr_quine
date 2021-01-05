#!/usr/bin/env bash
clang -Wall -Wextra -Werror -o ./src/Colleen/Colleen ./src/Colleen/Colleen.c
./src/Colleen/Colleen > ./src/Colleen/tmp_Colleen
diff ./src/Colleen/tmp_Colleen ./src/Colleen/Colleen.c
