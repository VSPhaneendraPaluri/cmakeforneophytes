#include "alu.h"

int main(int argc, char * argv[])
{
  Alu aluObject_;
  bool isError_ = false;
  double result = 0x0;

  result = aluObject_.do_divide(1, 3);
  isError_ = (result == 0.33) ? false : true;

  result = aluObject_.do_divide(3, 2);
  isError_ = (result == 1.50) ? false : true;

  return isError_;
}
