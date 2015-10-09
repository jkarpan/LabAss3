#
#	THIS MAKEFILE IS FOR
#	ASSIGNMENT 3
#	JORDAN KARPAN - 5041823

dictionary: main.o
	g++ main.o -o dictionary

LabAss2.o:
	g++ -c main.cpp

clean:
	rm *.o dictionary