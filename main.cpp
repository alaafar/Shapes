#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
// base class
class Shape
{
private :
    char color[ ] ; //  double length ;
public :
    Shape()
    {
       strcpy(color , "No color ") ;
    }
    Shape (char c[])  // a constructor
    {
        strcpy(color , c ) ;
    }
  /*  char getcolor ()
    {
        return color ;
    }
*/
};
class TwoDShapes : public Shape
{
public :
   // TwoDShapes_Shapes () ;
    virtual double Getarea() = 0 ;
};
class ThreeD_Shapes : public Shape
{
public :
    virtual double SurfaceArea() = 0 ;
    virtual double volume () = 0 ;
};
class circle : public TwoDShapes  {
private :
    double radius ;
public :
    circle () {}
    circle (double c )
    {
        radius = c ;
    }
    double Getarea() {
    cout << "Circle Area : " ;
    return 3.14*radius*radius ;
    }
    ~circle () {}
};
class square : public TwoDShapes
{
private :
    double side ; // because width = height
public :
    square () {}
    square (double s )
    {
        side = s ;
    }
    double Getarea( )
     {
         cout << "Square Area : " ;
         return side*side ;
     }
     ~square() {}
};
class sphere : public ThreeD_Shapes
{
private :
    double radius ;
public :
    sphere () {}
    sphere (double r )
    {
        radius = r ;
    }
        double SurfaceArea()
    {
        cout << "the surface area for sphere: " ;
        return 4*3.14*radius*radius ;
    }
    double volume()
    {
        cout << "the volume for sphere : " ;
        return (4*3.14*radius*radius*radius)/3 ;
    }

};
class cylinder : public ThreeD_Shapes {
private :
    double radius ;
    double height ;
public :
    cylinder ( ) { }
    cylinder(double r , double h)
    {
        radius = r ;
        height = h ;
    }
    double SurfaceArea()
    {
        cout << "the surface area for cylinder :" ;
        return  2 * 3.14 * radius * (radius + height) ;
    }
    double volume ( )
    {
        cout << "the volume for cylinder : " ;
        return 3.14*radius*radius*height ;
    }

};
int main ()
{
    // Shape S("red") ;
    TwoDShapes *s ;
    s = new circle (5) ;
    cout << s->Getarea() << endl ;
    s = new square(5) ;
    cout << s->Getarea() << endl ;
    ThreeD_Shapes *z ;
    z = new sphere(6) ;
    cout << z->SurfaceArea() << endl ;
    cout << z->volume() << endl ;
    z = new cylinder(4 , 5) ;
    cout << z->SurfaceArea() << endl ;
    cout << z->volume() << endl ;

    return 0 ;

}


