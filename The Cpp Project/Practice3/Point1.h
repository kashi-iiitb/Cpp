#include <iostream>

class Point{
    private:
        double x;
        double y;
    public:
        Point(double x_val, double y_val){
            x = x_val;
            y = y_val;
        }
        double get_x(){ return x;};
        double get_y(){ return y;};
        double distance(Point other);
};