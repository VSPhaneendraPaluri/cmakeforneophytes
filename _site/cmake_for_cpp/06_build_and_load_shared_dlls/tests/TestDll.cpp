#include "../sources/HelperAlgorithms.h"

#include <iostream>

int main()
{
  HelperAlgorithms algo;

  algo.setNumber(5);
  
  std::cout << "Input Value :  5" << std::endl;
  std::cout << "isOdd       : " << std::boolalpha << algo.isOddNumber() << std::endl;
  std::cout << "isEven      : " << std::boolalpha << algo.isEvenNumber() << std::endl;
  std::cout << "Factorial   : " << algo.computeFactorial() << std::endl;

  return 0;
}