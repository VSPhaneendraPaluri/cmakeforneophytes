#pragma once

#include "../singleton/Singleton.h"
#include <stdint.h>

class MySingleton : public Singleton<MySingleton>
{
  public:
    MySingleton();
    ~MySingleton();

    void setValue(uint32_t value);
    uint32_t getValue() const;

  private:
    uint32_t value_{0};
};
