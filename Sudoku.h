#include<iostream>
#include<ctime>
#include <cstdlib>
   
using namespace std;
   

class Sudoku{
public:
   int map[9][9];
   int map2[9][9];
   int ans1[9][9];
   int ans2[9][9];
   int i;
   int j;
   int k;
   int l;
   void giveQuestion();
   void readIn();
   void changeNum(int a,int b);
   void changeRow(int a,int b);
   void changeCol(int a,int b);
   void rotate(int n);
   void flip(int n);
   void transform();
   void qIsRight(int i,int j);
   int isSolvable1();
   int isSolvable2();
   void solve();
   
};
