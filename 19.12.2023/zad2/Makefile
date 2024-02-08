all: safeint.exe

safeint.exe: safeint.o
	gcc -o safeint.exe safeint.o

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

clean:
	del safeint.o safeint.exe


