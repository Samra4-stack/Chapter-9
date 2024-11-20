#include<iostream>
using namespace std;
int sqr(int x);
int cube(int y);
int main()
{
    int num1 , num2;
    cout<<"Enter two numbers: ";
    cin>>num1 >> num2;
    cout<<"Square of the "<<num1<<" number is: "<<sqr(num1)<<endl;
    cout<<"Cube of the "<<num2 <<" number is: "<<cube(num2)<<endl;
    return 0;
}
int sqr(int x)
{ 
    return x*x;
}
int cube(int y)
{ 
    return y*y*y;
}