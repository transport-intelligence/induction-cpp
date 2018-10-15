CC=g++
LIB_OBJS=Utility.o

hello: hello.o libhello.so.0
	$(CC) -o $@ $^ 

%.o: %.cpp
	$(CC) -fPIC -c $< -o $@

libhello.so.0: ${LIB_OBJS}
	$(CC) -g -fPIC -shared -Wl,-soname,$@ -o libhello.so.0.0.1  $^
	ln -sf libhello.so.0.0.1 $@

check: hello
	@echo "" && ./$< World && echo

clean:
	rm -f *.o hello

