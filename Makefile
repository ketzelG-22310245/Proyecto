
bin/main : src/main.cpp include/*
	c++ src/main.cpp -I include -o bin/main -lcurses

run : bin/main
	./bin/main

