
help:
	@echo "cpp03coro - make the cpp03 example"
	@echo "cpp20coro - make the cpp20 example"
	@echo "runexamples - run the examples"
	@echo "clean - remove binaries etc"

cpp03coro:
	g++ 3-cpp03coroutine.cpp -o cpp03coro

cpp20coro:
	g++ -g -O0 -Wall -Werror -Wextra -std=c++20  -fcoroutines  4-cpp20coroutine.cpp -o cpp20coro

runexamples: cpp03coro cpp20coro
	@echo "Running cpp03coro"
	./cpp03coro
	@echo "Running cpp20coro"
	./cpp20coro
	@echo "Running 2-simplefibonacci-generator.py"
	./2-simplefibonacci-generator.py

clean:
	rm -f cpp03coro
	rm -f cpp20coro
	rm -f *~

