#include "Point1.h"
#include <cmath>

double Point::distance(Point other){
    double dist;
    dist = sqrt(pow((x - other.x), 2) + pow((y - other.y), 2));
    return dist;
}