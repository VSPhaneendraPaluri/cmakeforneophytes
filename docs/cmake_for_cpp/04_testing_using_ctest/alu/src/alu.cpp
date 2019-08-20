#include "alu.h"

int32_t Alu::do_add(uint32_t operand1, uint32_t operand2)
{
  return (operand1 + operand2);
}

int32_t Alu::do_substract(uint32_t operand1, uint32_t operand2)
{
  return (operand1 - operand2);
}

int32_t Alu::do_multiply(uint32_t operand1, uint32_t multiplier)
{
  return (operand1 * multiplier);
}

double Alu::do_divide(uint32_t operand1, uint32_t divisor)
{
  return ((float)operand1 / (float)divisor);
}
