main:main.o functiona.o
	g++ main.o functiona.o -o main
main.o:main.cpp
	g++ -c main.cpp -o main.o
functiona.o:./date/functiona.cpp ./date/functiona.h
	g++ -c ./date/functiona.cpp  -o functiona.o
clean:
	rm -rf *.o
print: *.c
	lpr -p $?
	touch print
