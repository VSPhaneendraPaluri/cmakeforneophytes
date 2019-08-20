#include <iostream>

class Alu
{
  public:
    Alu() = default;
    ~Alu() = default;

    Alu(const Alu & rhs) = delete;
    Alu(const Alu && rhs) = delete;
    Alu & operator=(const Alu & rhs) = delete;
    Alu & operator=(const Alu && rhs) = delete;

    int32_t do_add(uint32_t operand1, uint32_t operand2);
    int32_t  do_substract(uint32_t operand1, uint32_t operand2);
    int32_t do_multiply(uint32_t operand1, uint32_t multiplier);
    double  do_divide(uint32_t operand1, uint32_t divisor);
};
