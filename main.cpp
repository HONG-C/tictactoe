#include <iostream>

using namespace std; 
int x_loc=0;  //틱택토 판에서 x위치
int y_loc=0;  //틱택토 판에서 y위치
int whoz_turn=0;//0일때 X차례, 1일때 O차례

void print_arr(char (*arr)[3])//틱택토 행렬을 보여주는 함수
{
  
  for (int i=0;i<3;i++)
  {
    for (int j=0;j<3;j++)
    {
      cout << arr[i][j];
    }  
    cout <<'\n';
  }
}

void find_loc(int num=0)//입력받은 숫자를 행렬의 위치로 변환해주는 함수
{
  x_loc=num/3;
  y_loc=num%3-1;
}


int main() 
{
  int loc=0;
  char arr[3][3]=
    {
      {'.','.','.'},
      {'.','.','.'},
      {'.','.','.'}
    };
while(1)
{
  print_arr(arr);
  cout<<"어디에 둘건가요?";
  cin>>loc;
  find_loc(loc);
  if(whoz_turn==0)
    {
      arr[x_loc][y_loc]='X';
      whoz_turn==1;
    }
  else
    {
      arr[x_loc][y_loc]='O';
      whoz_turn==0;
    }
  print_arr(arr);
  }
}