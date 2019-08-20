#pragma once

#include <stdint.h>

#ifdef HELPER_ALGO_EXPORTS
#define HELPER_ALGO_EXPORT_DLL __declspec(dllexport)
#else
#define HELPER_ALGO_EXPORT_DLL __declspec(dllimport)
#endif

class HELPER_ALGO_EXPORT_DLL HelperAlgorithms
{
  public:
    HelperAlgorithms();
    ~HelperAlgorithms();

    void setNumber(uint32_t number);
    uint32_t computeFactorial();
    bool isEvenNumber();
    bool isOddNumber();
    bool isPrimeNumber();

  private:
    uint32_t inputNumber{0};
};
