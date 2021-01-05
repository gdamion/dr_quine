#!/usr/bin/env bash
clang -Wall -Wextra -Werror -o ./src/Grace/Grace ./src/Grace/Grace.c
cd ./src/Grace/
./Grace
cd ../..
diff ./src/Grace/Grace.c ./src/Grace/Grace_kid.c | wc
