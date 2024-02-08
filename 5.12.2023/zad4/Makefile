all: help.exe strlength.exe strconcat.exe strcompare.exe

help.exe:
	@:

strlength.exe: strlength.c mystrings.o
	gcc -o strlength.exe strlength.c mystrings.o

strconcat.exe: strconcat.c mystrings.o
	gcc -o strconcat.exe strconcat.c mystrings.o

strcompare.exe: strcompare.c mystrings.o
	gcc -o strcompare.exe strcompare.c mystrings.o

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c

clean:
	del *.exe *.o
