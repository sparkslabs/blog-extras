
help:
	@echo "Targets"
	@echo "cpp03coro - make the cpp03 example"
	@echo "cpp20coro - make the cpp20 example"
	@echo "runexamples - run the examples"
	@echo "clean - remove binaries etc"
	@echo "bench-cpp03coroutine - build the cpp03 benchmarking binary"
	@echo "bench-cpp20coroutine  - build the cpp03 benchmarking binary"
	@echo "run-03-bench - run the cpp03 benchmark"
	@echo "run-20-bench - run the cpp20 benchmark"
	@echo "bench - run both benchmarks"
	@echo 
	@echo "help - this help"

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
	rm -f cpp*coro
	rm -f bench-*
	rm -f *~


bench-cpp03coroutine:
	g++ -g -O0 -Wall -Werror -Wextra -std=c++20  -fcoroutines 5-bench-cpp03coroutine.cpp -o bench-cpp03coroutine

run-03-bench: bench-cpp03coroutine
	time ./bench-cpp03coroutine


bench-cpp20coroutine:
	g++ -g -O0 -Wall -Werror -Wextra -std=c++20  -fcoroutines 6-bench-cpp20coroutine.cpp -o bench-cpp20coroutine

run-20-bench: bench-cpp20coroutine
	time ./bench-cpp20coroutine


bench: run-03-bench run-20-bench
	@echo "Running bench"
