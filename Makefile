
default:
	mkdir -p ./out/
	g++ -o ./out/snake ./src/snake.cc

run:
	./out/snake
