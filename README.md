# Binary-and-C-Intro-Assignment
## Random Mean
This program generates a list of random integers of a length specified by the usere and then calucluates the mean as a double. The program asks for two inputs from the user the first is the length of the list and the seconed is a seed for random number generation then it out puts the randomly gernate numbers and there mean.

## Compilation
I included a makefile and using ```make random_mean``` works but the other three rules ```all```,```clean``` and ```test``` aren't working for some reason. If the Make ile dose not work you can use the line
```
gcc -Wall -Wextra -pedantic -Werror random_mean.c -o random_mean.exe
```
to compile the code and 
```
./random_mean.exe 
```
to run the code. 
