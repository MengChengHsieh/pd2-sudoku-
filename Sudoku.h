#include <iostream>

class Sudoku{
public:
	Sudoku();
	Sudoku(const int init_map[]);
	void GQ0();
	void GQ1();
	void GQ2();
	void GiveQuestion();
	int Solve();
	static const int sudokuSize = 144;

	
private:
	int map[sudokuSize];
}
