#include "Sudoku.h"
using namespace std;

void Sudoku::DFS(int x, int y, int mode) 
{ 
	if(flag) return; 
	if(x == 12 && y == 0) { 
		cnt++; 
		if(mode == 1 && num == cnt) flag = true; 
		if(mode == 2 && cnt >= 2) { 
			flag = true; cout << 2 << endl; return; 
		} 
		if(mode == 3 && cnt >= 2) {
			 flag = true; 
		} 
		for(int i = 0; i < 12; i++) 
			for(int j = 0; j < 12; j++) 
				ans[i][j] = board[i][j]; 
				return; 
	}
	int now = get_value(x, y); 
	if(now == 0) { 
		for(int i = 1; i <= 9; i++) 
			if(valid(x, y, i)) {
				 set_value(x, y, i); DFS(x + (y+1)/12,(y+1)%12, mode); 
				set_value(x, y, 0); 
			}
	 } else {
		 DFS(x + (y+1)/12,(y+1)%12, mode); 
	} 
}

void Sudoku::GiveQuestion() 
{ 
	static int tmp = 0; 
	init(); 
	flag = false; 
	cnt = 0; 
	if(!tmp) srand(time(NULL)); 
	tmp++; 
	num = rand()%10000+1; 
	int a[4] = {0, 1, 2, 3}; 
	random_shuffle(a, a + 4); 
	for(int i = 0; i < 12; i++) 
		for(int j = 0; j < 12; j++) 
			if(j/3==a[i/3]) board[i][j] = -1; 
	DFS(0, 0, 1); 
	int b[9] = {1,2,3,4,5,6,7,8,9}; 
	random_shuffle(b, b + 9); 
	for(int i = 0; i < 12; i++) 
		for(int j = 0 ; j < 12; j++) { 
			board[i][j] = ans[i][j]; 
			if(get_value(i, j) != -1) 
				set_value(i, j, b[get_value(i, j)-1]); 
		} 
	cnt = rand()%30+20; 
	while(cnt) { 
		int x = rand()%12, y = rand()%12; 
		if(board[x][y] != -1) 
			board[x][y] = 0, cnt--; 
	} 
	flag = false; 
	cnt = 0; 
	DFS(0, 0, 3); 
	if(cnt == 1) print(board); 
	else GiveQuestion(); 
}
