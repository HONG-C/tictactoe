#include <iostream>
#include "Game.h"
#include "Player.h"

using namespace std;

void game_play(void)
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
    tictactoe.whoz_win=tictactoe.check_win(arr);  //누가 이겼는지 승부가 아직 안 났는지 확인
    if(tictactoe.whoz_win==1)
    {
      cout<<"X가 이겼습니다! 게임을 종료합니다\n";
      tictactoe.print_arr(arr);
      break;
    }
    if(tictactoe.whoz_win==2)
    {
      cout<<"O가 이겼습니다! 게임을 종료합니다/n";
      tictactoe.print_arr(arr);
      break;
    }
    if(tictactoe.whoz_turn==9&&tictactoe.whoz_win==0)
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

int main() 
{
  Player X_player(0);
  Player Y_player(0);
  
  int mode=0;
  cout<<"틱택토 게임에 오신것을 환영합니다\n";
  cout<<"1인용:1   2인용:2\n모드를 입력하세요:"<<endl;
  cin>>mode;
  if(mode==1)
  {
    cout<<"1인용게임을 시작합니다"<<endl;
    cout<<"아직 지원하지 않습니다!"<<endl;
  }
  if(mode==2)
  {
    cout<<"2인용게임을 시작합니다"<<endl;
    game_play();  
  }  
  else
  {
    cout<<"지원하지 않는 기능입니다!"<<endl;
  }
}