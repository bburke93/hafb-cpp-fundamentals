#include "age.h"

void ByReferenceAgeIn5Years(int& age)
{
    age += 5;
}

void ByValueAgeIn5Years(int age) 
{
    age += 5;
}

int CurrentAge(int age) 
{
  return age;
}