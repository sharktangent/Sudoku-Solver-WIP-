// SudokuSolver.h
#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <gtkmm.h>

// SudokuSolver class is the application window for the sudoku solver
class SudokuSolver : public Gtk::Window {
public:
	// constructor
	SudokuSolver();

	// destructor
	virtual ~SudokuSolver();
};

#endif
