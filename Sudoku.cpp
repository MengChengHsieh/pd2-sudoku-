#include "Sudoku.h"
using namespace std;

Sudoku::Sudoku() 
{
	for(int i = 0; i<sudokuSize;++i)
		map[i]=0;
}

void Sudoku::Sudoku(const int init_map[])
{
	for(int i = 0; i<sudokuSize; ++i)
		map[i] = init_map[i];
}

void GQ0()
{
	int r[9]= rand()%9+1;
	int a = rand		
	cout<<"i g h c a b f d e -1 -1 -1"<<endl;
	cout<<"c a b f d e i g h -1 -1 -1"<<endl;
	cout<<"f d e i g h c a b -1 -1 -1"<<endl;
	cout<<"g h i a b c -1 -1 -1 d e f"<<endl;
	cout<<"a b c d e f -1 -1 -1 g h i"<<endl;
	cout<<"d e f g h i -1 -1 -1 a b c"<<endl;
	cout<<"h i g -1 -1 -1 d e f c a b"<<endl;
	cout<<"b c a -1 -1 -1 h g i f d e"<<endl;
	cout<<"e f d -1 -1 -1 a b c i g h"<<endl;
	cout<<"-1 -1 -1 b c a e f d h i g"<<endl;
	cout<<"-1 -1 -1 e f d h i g b c a"<<endl;
	cout<<"-1 -1 -1 h i g b c a e f d"<<endl;
}

void GQ1()
{
	cout<<"-1 -1 -1 i g h c a b f d e"<<endl;
	cout<<"-1 -1 -1 c a b f d e i g h"<<endl;
	cout<<"-1 -1 -1 f d e i g h c a b"<<endl;
	cout<<"g h i -1 -1 -1 a b c d e f"<<endl;
	cout<<"a b c -1 -1 -1 d e f g h i"<<endl;
	cout<<"d e f -1 -1 -1 g h i a b c"<<endl;
	cout<<"c a b g h i -1 -1 -1 e f d"<<endl;
	cout<<"f d e a b c -1 -1 -1 h i g"<<endl;
	cout<<"i g h d e f -1 -1 -1 b c a"<<endl;
	cout<<"e f d h i g b c a -1 -1 -1"<<endl;
	cout<<"h i g b c a e f g -1 -1 -1"<<endl;
	cout<<"b c a e f d h i g -1 -1 -1"<<endl;

}

void GQ2()
{

}

int Sudoku::GiveQuestion() 
{ 
	Sudoku();
	int mode;
	srand(time(NULL));
	mode = rand()%3;
	switch(mode){
		case 0:
			GQ0();
			break;
		case 1:
			GQ1();
			break;
		case 2:
			GQ2();
			break;
		default:
			cout << "fault"<<endl;
			break;
	}
}

int Sudoku::Solve() 
{


}

void Sudoku::ReadIn()
{



} 
