#pragma once

template<typename T>
class Singleton
{
  public:
    static T& getInstance()
    {
      static T object;
      return object;
    }

    ~Singleton() = default;
    //Singleton(const Singleton & rhs) = delete;
    //Singleton(const Singleton && rhs) = delete;
    //Singleton& operator=(const Singleton & rhs) = delete;
    //Singleton& operator=(const Singleton && rhs) = delete;

  protected:
    Singleton() = default;
};
