#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    int x, y, z;
};

double sqr(double x){
    return x * x;
}

double distance(Point p1, Point p2){
    return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y) + sqr(p1.z - p2.z));
}

int main(){
    int x1, y1, z1, x2, y2, z2;

    cout << "Enter p1" << endl;
    scanf("%i %i %i", &x1, &y1, &z1);
    cout << "Enter p2" << endl;
    scanf("%i %i %i", &x2, &y2, &z2);

    Point p1 = { x1,y1,z1 };
    Point p2 = { x2,y2,z2 };

    printf("%lf", distance(p1, p2));

    return 0;
}