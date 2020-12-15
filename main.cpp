#include <iostream>

using namespace std; 
int x_loc=0;  //틱택토 판에서 x위치
int y_loc=0;  //틱택토 판에서 y위치
int whoz_turn=0;//0일때 X차례, 1일때 O차례
int whoz_win=0;
int check_win(char (*arr)[3]);//행렬을 입력받아 승부를 체크하는 함수
//승부가 안나면 0,x가 이기면 1, o가 이기면 2 반환
void print_arr(char (*arr)[3]);//틱택토 행렬을 보여주는 함수

int check_win(char (*arr)[3])//행렬을 입력받아 승부를 체크하는 함수
//승부가 안나면 0,x가 이기면 1, o가 이기면 2 반환
{
  for (int i=0;i<3;i++)//가로 한줄을 만들었을 시
  {
    if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]=='X')
    {
      cout<<"경기 끝! X의 승리!\n";
      return 1;
    }
    if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]=='O')
    {
      cout<<"경기 끝! O의 승리!\n";
      return 2;
    }
    else
    {
      
    }
  }  
  for (int j=0;j<3;j++)//세로 한줄을 만들었을 시
  {
    if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[0][j]=='X')
    {
      cout<<"경기 끝! X의 승리!\n";
      return 1;
    }
    if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[0][j]=='O')
    {
      cout<<"경기 끝! O의 승리!\n";
      return 2;
    }
    else
    {
      
    }
  }
  return 0;//승부가 나지 않은 경우 함수 탈출!
}

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
  cin>>loc; //둘 위치를 입력받음
  find_loc(loc);  //입력받은 위치를 배열 위치로 변환
  if(whoz_turn==0)//누구 차례인지에 따라 x 또는 o 입력
    {
      arr[x_loc][y_loc]='X';
      whoz_turn=1;
    }
  else
    {
      arr[x_loc][y_loc]='O';
      whoz_turn=0;
    }
  whoz_win=check_win(arr);  //누가 이겼는지 승부가 아직 안 났는지 확인
  
  }
}