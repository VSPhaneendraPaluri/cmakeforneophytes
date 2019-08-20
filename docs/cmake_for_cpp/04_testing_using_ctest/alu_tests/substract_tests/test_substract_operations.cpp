#include "alu.h"

int main(int argc, char * argv[])
{
  Alu aluObject_;
  bool isError_ = false;
  int32_t result = 0x0;

  result = aluObject_.do_substract(3, 1);
  isError_ = (result == 2) ? false : true;

  result = aluObject_.do_substract(1, 3);
  isError_ = (result == -2) ? false : true;

  result = aluObject_.do_substract(1, -3);
  isError_ = (result == 4) ? false : true;

  result = aluObject_.do_substract(-3, 1);
  isError_ = (result == -4) ? false : true;

  return isError_;
}