bin/main: Makefile src/main.cpp src/alphabet.cpp src/letter.cpp src/pixelBoolMatrix.cpp src/polygon.cpp src/print.c src/alphabet-2.txt src/names.txt src/alphabet.h src/letter.h src/pixelBoolMatrix.h src/polygon.h src/print.h src/point.h bin
	g++ src/main.cpp src/alphabet.cpp src/letter.cpp src/pixelBoolMatrix.cpp src/polygon.cpp src/print.c -fpermissive -w -o bin/main
	cp src/alphabet-2.txt bin/alphabet-2.txt
	cp src/names.txt bin/names.txt

bin:
	mkdir -p bin
