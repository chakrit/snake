
default:
	mkdir -p ./out/obj ./out/bin
	g++ -c -o ./out/obj/snake.o ./src/snake.cc
	g++ -o ./out/bin/snake ./out/obj/snake.o

run:
	./out/bin/snake
