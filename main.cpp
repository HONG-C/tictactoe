#include <iostream>
#include "Game.h"

using namespace std;



int main() 
{
  Game tictactoe;
  
  int loc=0;
  char arr[3][3]=
    {
      {'.','.','.'},
      {'.','.','.'},
      {'.','.','.'}
    };
while(1)
  {
    tictactoe.print_arr(arr);
    cout<<"어디에 둘건가요?";
    cin>>loc; //둘 위치를 입력받음
    tictactoe.find_loc(loc);  //입력받은 위치를 배열 위치로 변환
    int a=tictactoe.set_stone(arr);
    whoz_win=tictactoe.check_win(arr);  //누가 이겼는지 승부가 아직 안 났는지 확인
    if(whoz_win==1)
    {
      cout<<"X가 이겼습니다! 게임을 종료합니다\n";
      tictactoe.print_arr(arr);
      break;
    }
    if(whoz_win==2)
    {
      cout<<"O가 이겼습니다! 게임을 종료합니다/n";
      tictactoe.print_arr(arr);
      break;
    }
    if(whoz_turn==9&&whoz_win==0)
    {
      cout<<"비겼습니다! 게임을 종료합니다\n";
      tictactoe.print_arr(arr);
      break;
    }
    else
    {
      //승부가 안났으니 걍 진행!
    }
  }
}