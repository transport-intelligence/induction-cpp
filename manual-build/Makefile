CC=g++
LIB_OBJS=src/lib/Utility.o

hello: src/bin/hello.o libhello.so.0
	@$(CC) -Iinclude -o $@ $^ && \
		echo "You may have to set the LD_LIBRARY_PATH variable:" && \
		echo "export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH"

%.o: %.cpp
	$(CC) -fPIC -Iinclude -c $< -o $@

libhello.so.0: ${LIB_OBJS}
	$(CC) -g -fPIC -shared -Wl,-soname,$@ -o libhello.so.0.0.1  $^
	ln -sf libhello.so.0.0.1 $@

check: hello
	@echo "" && ./$< World && echo

clean:
	rm -f *.o hello

