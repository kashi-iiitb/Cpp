#include "Calc.h"

Calc::Calc(int val){
    stored = val;
}

Calc::Calc(const Calc &rhs): Calc(rhs.stored){
}

Calc::~Calc(){}

const Calc& Calc::operator=(const Calc &rhs){
    stored = rhs.stored;
    return (*this);
}

size_t Calc::getStored(){
    return stored;
}

void Calc::setStored(size_t newStored){
    stored = newStored;
}