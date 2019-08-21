#include "../include/MySingleton.h"

#include <iostream>

int main(int argc, char * argv[])
{
  MySingleton mySingleton = MySingleton::getInstance();

  return 0;
}
