g++ -Wall -g -O0 -I../staticlib -I../shlibFirst -I../shlibSecond -c main.cpp
g++ main.o -L../staticlib -lsingleton	\
	   -L../shlibFirst -lfirst	\
	   -L../shlibSecond -lsecond	\
	   -Wl,-R../shlibFirst		\
	   -Wl,-R../shlibSecond		\
	   -o clientApp
