Distance.o: Distance.cpp Distance.h
	g++ -c Distance.cpp

clean:
	rm -f *.o Distance
