main:funkcijos.o vectorMain.o
	g++ -o main vectorMain.o funkcijos.o
funkcijos:
	g++ -c funkcijos.cpp
vectorMain:
	g++ -c vectorMain.cpp
clean:
	rm *.o main
