#include <iostream>

using namespace std;
double area(double a, double b)
{
    cout << "\nArea of Triangle is : " << (a*b)/2 ;

}
int area(int c, int d)
{
    cout << "\nArea of Rectangle is : " << c*d ;

}
double area(double e)
{
    cout << "\nArea of Circle is : " << 3.14 * e * e ;

}
int main()
{
    int c, d ;
    double a, b, e, f, g;
    cout << "For Triangle";
    cout << "\nEnter Base  : ";
    cin >> a ;
    cout << "\nEnter Height  : ";
    cin >> b ;
    cout << "\nFor Rectangle";
    cout << "\nEnter Lenght : ";
    cin >> c ;
    cout << "\nEnter Breadth : ";
    cin >> d ;
    cout << "\nFor Circle";
    cout << "\nEnter Radius : ";
    cin >> e ;
    area (a,b);
    area (c,d);
    area (e);

    return 0;
}
