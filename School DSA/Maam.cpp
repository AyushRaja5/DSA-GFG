#include<iostream>
#include<math.h>
#define PI=3.14
using namespace std;
class Polygon{
    private:
        int n=3;
        double side=1;
        double x=0;
        double y=0;
    public:
        Polygon(){
            cout<<"Polygon Constructed";
            n=3;
            side =1;
            x=0;
            y=0;
        }
        Polygon(int N, double len, double X, double Y){
            cout<<"Regular Polygon Created";
            n=N;
            side = len;
            X=0;
            Y=0;
        }
        Polygon(int N, double len, double X, double Y) {
            n = N;
            side =len;
            x = X;
            y = Y;
        }
        void setN(int newN){
            n = newN;
        }
        void setSide(double newSide){
            side = newSide;
        }
        void setX(double newX) {
            x = newX;
        }
        void setY(double newY) {
            y = newY;
        }
        int getN() {
            return n;
        }
        double getSide() {
            return side;
        }
        double getX() {
            return x;
        }
        double getY() {
            return y;
        }
        double getPerimeter() {
            return side * n;
        }


        double getArea() {
            return (n * pow(side, 2)) / (4 * tan(PI / n));
        }
    }
}
int main(){

}

// ■ A constructor that creates a regular polygon with the specified number of sides
// and length of side, centered at (0, 0).
// ■ A constructor that creates a regular polygon with the specified number of sides,
// length of side, and x- and y-coordinates.
// ■ The accessor and mutator methods for all data fields.
// ■ The method getPerimeter() that returns the perimeter of the polygon.
// ■ The method getArea() that returns the area of the polygon.
// Write a test
// program that creates three RegularPolygon objects, created using the no-arg
// constructor, using RegularPolygon(6, 4), and using RegularPolygon(10,
// 4, 5.6, 7.8). For each object, display its perimeter and area*/