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

int Sudoku::GQ0(int arr[])
{	
	int r[9]={0,0,0,0,0,0,0,0,0};
        for(int y=0;y<9;++y){
                r[y]=arr[y];
        }

        int init_map[144]={'i','g','h','c','a','b','f','d','e','z','z','z','c','a','b','f','d','e','i','g','h','z','z','z','f','d','e','i','g','h','c','a','b','z','z','z','g','h','i','a','b','c','z','z','z','d','e','f','a','b','c','d','e','f','z','z','z','g','h','i','d','e','f','g','h','i','z','z','z','a','b','c','h','i','g','z','z','z','d','e','f','c','a','b','b','c','a','z','z','z','h','g','i','f','d','e','e','f','d','z','z','z','a','b','c','i','g','h','z','z','z','b','c','a','e','f','d','h','i','g','z','z','z','e','f','d','h','i','g','b','c','a','z','z','z','h','i','g','b','c','a','e','f','d'};

	for(int y=0;y<144;++y){
                switch(init_map[y]){
                        case 'a':
                                init_map[y]=r[0];
                                break;
                        case 'b':
                                init_map[y]=r[1];
                                break;
                        case 'c':
                                init_map[y]=r[2];
                                break;
                        case 'd':
                                init_map[y]=r[3];
                                break;
                        case 'e':
                                init_map[y]=r[4];
                                break;
                        case 'f':
                                init_map[y]=r[5];
                                break;
                        case 'g':
                                init_map[y]=r[6];
                                break;
                        case 'h':
                                init_map[y]=r[7];
                                break;
                        case 'i':
                                init_map[y]=r[8];
                                break;
			case 'z':
                                init_map[y]= -1;
                                break;
                        default:
                                cout<<"fault"<<endl;
                                break;
                }
        }
	init_map[3]=init_map[4]=init_map[143]=init_map[141]=init_map[135]=init_map[18]=init_map[13]=init_map[46]=init_map[63]=0;

        for(int i=0;i<144;++i){
                if(i%12==11){
                        cout<< init_map[i]<<endl;
                }else{
                        cout<< init_map[i]<<" ";
                }
        }

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

	int n = 9;
	int cnt, num, r[9];
	int find;
	srand(time(NULL));
	cnt = 0;
	while(cnt < n){
		num = rand()%9+1;
		find = 0;
		for(int i = 0;i<cnt;++i){
			if(r[i]==num){ find=1; break;}
		}
		if(find==0){ 
			r[cnt]=num; ++cnt;
		}
	}
	/*for(int i = 0;i<n;++i){
		cout<<r[i]<<" ";
	}*/

	/*switch(mode){
		case 0:
			GQ0(r);
			break;
		case 1:
			GQ1(r);
			break;
		case 2:
			GQ2(r);
			break;
		default:
			cout << "fault"<<endl;
			break;
	}*/
	GQ0(r);
	
}

int Sudoku::Solve() 
{


}

void Sudoku::ReadIn()
{



} 
