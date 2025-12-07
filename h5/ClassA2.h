#pragma once
#include "ClassB.h"

class ClassA2
{
private:
    ClassB &refB; // Referenssi olioon B
public:
    ClassA2(ClassB&);
    string getBinfo();
    void setBinfo(string);
};

