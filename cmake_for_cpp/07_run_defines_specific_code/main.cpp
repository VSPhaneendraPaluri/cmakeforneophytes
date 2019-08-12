#include <iostream>

#include <vector>

int main()
{
  std::vector<uint32_t> listOfIntegers;

#ifdef INSERT_ODD_NUMBERS
  listOfIntegers.push_back(1);
  listOfIntegers.push_back(3);
  listOfIntegers.push_back(5);
  listOfIntegers.push_back(7);
  listOfIntegers.push_back(9);
#elif INSERT_EVEN_NUMBERS
  listOfIntegers.push_back(0);
  listOfIntegers.push_back(2);
  listOfIntegers.push_back(4);
  listOfIntegers.push_back(6);
  listOfIntegers.push_back(8);
#endif

  std::cout << "------------------------------------" << std::endl;
  for (auto index = 0; index < listOfIntegers.size(); ++index)
  {
    std::cout << " index[" << index << "] : " << listOfIntegers[index] << std::endl;
  }
  std::cout << std::endl;
}