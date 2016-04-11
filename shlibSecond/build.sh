rm -rf *.o lib*
g++ -Wall -g -O0 -fPIC -I../staticlib -c shlibfirstexports.cpp -o shlib.o
g++ -shared shlib.o -L../staticlib -lsingleton -Wl,--version-script=versionScript	\
-Wl,-soname,libsecond.so.1 -o libsecond.so.1.0.0
ldconfig -n .
ln -s libsecond.so.1 libsecond.so 
