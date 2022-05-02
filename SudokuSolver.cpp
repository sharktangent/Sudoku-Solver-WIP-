// SudokuSolver.cpp

#include "SudokuSolver.h"

// Constructor
SudokuSolver::SudokuSolver()
{
  // initial window
  set_default_size(500, 500);
  set_title("Sudoku Solver");
  set_border_width(50);
  add(input_frame);
  input_frame.set_label("Sudoku Solver");
  input_frame.set_shadow_type(Gtk::SHADOW_NONE);


  // initialize the entry matrix for the sudoku board
  for (int i = 0; i < 9; ++i) 
  {
    std::vector<Gtk::Entry *> row;
    for (int j = 0; j < 9; ++j)
    {
      row.push_back(new Gtk::Entry());
    }
    entry_matrix.push_back(row);
  }

  // set the max size for the entries
  for (int i = 0; i < 9; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      entry_matrix[i][j]->set_max_length(1);
      entry_matrix[i][j]->set_width_chars(2);
    }
  }

  // entry grid for numbers
  entry_grid.set_row_spacing(10);
  entry_grid.set_column_spacing(10);
  input_frame.add(entry_grid);

  // entry matrix to entry grid
  for (int i = 0; i < 9; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      entry_grid.attach(*entry_matrix[i][j], i, j);
    }
  }

  show_all_children();
}

// Destructor
SudokuSolver::~SudokuSolver() 
{
  if (entry_matrix.size() > 0)
  {
    for (int i = 0; i < entry_matrix.size(); ++i)
    {
      for (int j = 0; j < entry_matrix[j].size(); ++j)
      {
        delete entry_matrix[i][j];
      }
    }
  }
}
