rm -rf *.o lib*
g++ -Wall -g -O0 -mcmodel=large -c singleton.cpp -o singleton.o
ar -rcs libsingleton.a singleton.o
