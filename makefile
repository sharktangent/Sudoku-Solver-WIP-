application: driver.o SudokuSolver.o
	g++ --std=c++11 driver.o SudokuSolver.o -o SudokuSolver `pkg-config gtkmm-3.0 --cflags --libs`
driver.o: driver.cpp SudokuSolver.h
	g++ --std=c++11 -c driver.cpp -o driver.o `pkg-config gtkmm-3.0 --cflags --libs`
SudokuSolver.o: SudokuSolver.h SudokuSolver.cpp
	g++ --std=c++11 -c SudokuSolver.cpp -o SudokuSolver.o `pkg-config gtkmm-3.0 --cflags --libs`
clean:
	rm *.o
	rm SudokuSolver
