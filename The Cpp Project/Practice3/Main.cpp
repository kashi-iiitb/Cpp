#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Point1.h"

int main(int argc, char *argv[]){
    double x1, y1, x2, y2;
    double dist;
    char *endptr;
    if(argc!=5){
        std::cout << "Incorrect number of arguments!" << std::endl;
        std::cout << "Please, enter: x1 y1 x2 y2" << std::endl;
        return -1;
    }
    x1 = strtod(argv[1], &endptr);
    if(endptr == argv[1]){
        std::cout << "x1: strtod() conversion failed." << std::endl;
    }
    y1 = strtod(argv[2], &endptr);
    if(endptr == argv[2]){
        std::cout << "x1: strtod() conversion failed." << std::endl;
    }
    x2 = strtod(argv[3], &endptr);
    if(endptr == argv[3]){
        std::cout << "x1: strtod() conversion failed." << std::endl;
    }
    y2 = strtod(argv[4], &endptr);
    if(endptr == argv[4]){
        std::cout << "x1: strtod() conversion failed." << std::endl;
    }

    Point p1(x1, y1);
    Point p2(x2, y2);
    dist = p1.distance(p2);

    std::cout   << "Distance between (" << x1 << ", " << y1 << ") and"
                << " (" << x2 << ", " << y2 << ") is = " << dist << std::endl;
}