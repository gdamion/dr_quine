# dr_quine
This project represents self-replricating programms.
The are 3 programs, sorted by difficulty (from easyest to hardest):
1) `Colleen` - source code goes straight to the standart output
2) `Grace` - source code goes to another identical source file called `Grace_kid.c`
3) `Sully` - program creates copy of source code in file `Sully_5.c`, compiles it and executes. That `Sully_5` does the same with result - `Sully_4`. Everything ends when we reach index 0: `Sully_0` binary being just created and compiled, but not executed
## Makefile
Standart commands work from the root of project's C part:
* `make` - create object files and compile the, into binary executables
* `make clean` - clean object files and temporal files, created during execution
* `make fclean` - the same as `clean` cmd + delete binaries
* `make re` - the same as `clean` cmd + `make` cmd (delete everything and rebuild)
## Tests
Basic test are in `./tests` folder. They're simple bash scripts, executing binaries of each program and checking the output: whether output is similar to source file or not.

You should launch them from the root of C part like this:
* `./test/Grace.sh`
* `./test/Sully.sh`
* `./test/Colleen.sh`

## Author
gdamion- (intra)
