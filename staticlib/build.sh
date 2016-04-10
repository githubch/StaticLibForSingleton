rm -rf *.o lib*
g++ -Wall -g -O0 -mcmodel=large -c staticlibsingleton.cpp -o singleton.o
ar -rcs libsingleton.a singleton.o
