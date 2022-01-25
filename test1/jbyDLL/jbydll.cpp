#include "jbydll.h"
JbyDLL::JbyDLL(int a, int b)
{
    this->a=a;
    this->b=b;
}

int JbyDLL::Add()
{
    return this->a+this->b;
}
