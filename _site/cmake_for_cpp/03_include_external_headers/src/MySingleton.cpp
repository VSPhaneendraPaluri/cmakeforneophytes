#include "../include/MySingleton.h"
#include <iostream>

MySingleton::MySingleton()
{
  std::cout << __FUNCSIG__ << std::endl;
}

MySingleton::~MySingleton()
{
  std::cout << __FUNCSIG__ << std::endl;
}

void MySingleton::setValue(uint32_t value)
{
  value_ = value;
}

uint32_t MySingleton::getValue() const
{
  return value_;
}
