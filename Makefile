all: build

build: dirs rock.o types
	ar -rvs build/rock.a build/rock.o build/types/Boolean.o build/types/Mysterious.o build/types/Null.o build/types/Number.o build/types/String.o build/types/Var.o

dirs:
	mkdir -p build/types

rock.o:
	g++ -c src/rock-cpp/rock.cc -o build/rock.o -std=c++17

types: Boolean.o Mysterious.o Null.o Number.o String.o Var.o

Boolean.o:
	g++ -c src/rock-cpp/types/Boolean.cc -o build/types/Boolean.o -std=c++17

Mysterious.o:
	g++ -c src/rock-cpp/types/Mysterious.cc -o build/types/Mysterious.o -std=c++17

Null.o:
	g++ -c src/rock-cpp/types/Null.cc -o build/types/Null.o -std=c++17

Number.o:
	g++ -c src/rock-cpp/types/Number.cc -o build/types/Number.o -std=c++17

String.o:
	g++ -c src/rock-cpp/types/String.cc -o build/types/String.o -std=c++17

Var.o:
	g++ -c src/rock-cpp/types/Var.cc -o build/types/Var.o -std=c++17
