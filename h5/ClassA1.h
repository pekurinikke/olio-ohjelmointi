#pragma once
#include "ClassB.h"

class ClassA1
{
private:
    ClassB objectB; // Kopio olio B:stä
public:
    ClassA1(ClassB);
    string getBinfo();
    void setBinfo(string);
};
