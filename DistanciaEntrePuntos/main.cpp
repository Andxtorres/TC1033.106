#include <iostream>
#include "Point.h"
using namespace std;

int main(){
    Point p1;
    Point p2(10,20);

    cout<<"El punto p1 es: X: "<<p1.getX()<<" Y: "<<p1.getY()<<endl;
    cout<<"El punto p2 es: X: "<<p2.getX()<<" Y: "<<p2.getY()<<endl;
    cout<<"La distancia entre los dos puntos es: "<<p1.calaculateDistance(p2)<<endl;

    Point p3(15,5);
    Point p4(30,1);

    cout<<"El punto p3 es: X: "<<p3.getX()<<" Y: "<<p3.getY()<<endl;
    cout<<"El punto p4 es: X: "<<p4.getX()<<" Y: "<<p4.getY()<<endl;
    cout<<"La distancia entre los dos puntos es: "<<p3.calaculateDistance(p4)<<endl;
    return 0;
}
