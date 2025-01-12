Distance.o: Distance.cpp Distance.h
	g++ -c Distance.cpp

Math2.o: Math2.cpp Math2.h
	g++ -c Math2.cpp

clean:
	rm -f *.o Distance
