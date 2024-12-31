

build:
	clang++ hello.cpp -o hello

run:
	clang++ hello.cpp && ./a.out

run-array:
	clang++ array.cpp && ./a.out

run-add:
	clang++ add.cpp && ./a.out
