#include<iostream>
using namespace std;
int multiply();
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Before Calling the function the num is "<< num << endl;
    multiply();
    cout<<"After Calling the function the num is "<< num << endl;
    return 0;
}
int multiply()
{
   int  num = num  * 2;
   return num ;
}
