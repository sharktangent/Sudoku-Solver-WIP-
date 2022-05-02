// SudokuSolver.h
#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <gtkmm.h>
#include <vector>

// SudokuSolver class is the application window for the sudoku solver
class SudokuSolver : public Gtk::Window 
{
public:
	// constructor
	SudokuSolver();

	// destructor
	virtual ~SudokuSolver();

protected:
	std::vector<std::vector<Gtk::Entry *>> entry_matrix;
  Gtk::Frame input_frame;
	Gtk::Grid entry_grid;
};

#endif
