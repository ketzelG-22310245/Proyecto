
bin/main : src/main.cpp include/*.hpp
	c++ src/main.cpp -I include -o bin/main -l curses

run : bin/main
	./bin/main

