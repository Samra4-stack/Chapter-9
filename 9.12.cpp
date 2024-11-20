#include<iostream>
using namespace std;
float area(int b , int h);
int main()
{
  int base , height ;
  cout<< "Enter base and height of triangle : ";
  cin>> base >> height;
  cout<<"Area of triangle is: "<<area(base,height)<<endl;
  return 0;
}
float area(int b , int h)
{
    int area ;
    area = 0.5 * b * h;
    cout << "Area of rectangle is: " << area << endl;
    return area;
}