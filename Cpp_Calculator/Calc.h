//
//

#ifndef CALC_H
#define CALC_H


#include <string>

class Calc {
public:
    Calc(int val);  //constructor
    Calc(const Calc &rhs);  //Copy constructor
    ~Calc();    //Destructor
    const Calc &operator=(const Calc &rhs); //Copy Assignment operator
    double process(std::string userInput, double prevValue);
//    void print();
//    std::string* storedExpressions;
    void setStored(size_t newStored);
    size_t getStored();
private:
    size_t stored;
};


#endif //RHYMECALC_CALC_H
