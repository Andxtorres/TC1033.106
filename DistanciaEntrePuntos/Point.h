#include <iostream>
#include <cmath>

using namespace std;

class Point{
    private:
        double x;
        double y;
    public: 
        Point();
        Point(double x, double y);
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);
        double calaculateDistance(Point point2);
};
Point::Point(){
    x=0.0;
    y=0.0;
}
Point::Point(double x, double y){
    this->x=x;
    this->y=y;
}
double Point::getX(){
    return x;
}
double Point::getY(){
    return y;
}
void Point::setX(double x){
    x=x;
}
void Point::setY(double y){
    this->y=y;
}
double Point::calaculateDistance(Point point2){
    double resultado=0;
    resultado=sqrt(pow((x-point2.getX()),2)+pow((y-point2.getY()),2));
    return resultado;
}

