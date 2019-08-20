#include "HelperAlgorithms.h"

HelperAlgorithms::HelperAlgorithms()
{
}

HelperAlgorithms::~HelperAlgorithms()
{
}

void HelperAlgorithms::setNumber(uint32_t number)
{
  inputNumber = number;
}

uint32_t HelperAlgorithms::computeFactorial()
{
  uint32_t temp = inputNumber;
  uint32_t resultValue = 1;
  while(temp > 0)
  {
    resultValue *= temp;
    temp--;
  }
  return resultValue;
}

bool HelperAlgorithms::isEvenNumber()
{
  return ((inputNumber % 2) == 0 ? true : false);
}

bool HelperAlgorithms::isOddNumber()
{
  return ((inputNumber % 2) == 0 ? false : true);
}

bool HelperAlgorithms::isPrimeNumber()
{
  return false;
}
