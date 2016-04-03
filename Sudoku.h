#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
class Sudoku{
public:
   void giveQuestion();
   void readIn();
   void changeNum(int a,int b);
   void changeRow(int a,int b);
   void changeCol(int a,int b);
   void rotate(int n);
   void rotate2(int n);
   void rotate3(int n);
   void flip(int n);
   void transform();
   int isAvailable(int puzzle[][9], int row, int col, int num);
   int fillSudoku(int puzzle[][9], int row, int col, int num);
   int isSolvable1();
   int isSolvable2();
   void solve();
   int map[9][9];
   int map2[9][9];
   int ans1[9][9];
   int ans2[9][9];
   int i;
   int j;
   int k;
   int l;
};
