#include <iostream>
double d,r;
double calculate_circumference(double a)
{
    double circumference;
    circumference=3.14*d;
    return(circumference);
}
double calculate_area(double b)
{
    double area;
    area=3.14*r*r;
    return area;
}
int main()
{
std::cout<<"Please enter the diameter:";
std::cin>>d;
r=d/2;
double a1=calculate_area(r);
double c1=calculate_circumference(d);
std::cout<<"The circumference is:"<<c1<<" and the area is:"<<a1;
return 0;
}
