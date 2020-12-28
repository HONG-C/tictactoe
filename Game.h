#ifndef Game_h
#define Game_h



class Game
{
  private:
  int x_loc=0;  //틱택토 판에서 x위치
  int y_loc=0;  //틱택토 판에서 y위치
  
  
  public:
  int whoz_turn=0;//짝수일 때 X차례, 홀수일 때 O차례(9번 하면 무승부)
  int whoz_win=0;//1이면 x승리,2이면 o승리
  int check_win(char (*arr)[3]);//행렬을 입력받아 승부를 체크하는 함수
  //승부가 안나면 0,x가 이기면 1, o가 이기면 2 반환
  void print_arr(char (*arr)[3]);//틱택토 행렬을 보여주는 함수
  int set_stone(char (*arr)[3]);//돌을 빈 곳에 두는 함수
  void find_loc(int num);
};

#endif