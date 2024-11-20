#include<iostream>
using namespace std;
char grade(int m);
int main()
{
  int marks;
  cout<<"Enter marks: ";
  cin>>marks;
  cout<< "Your Grade is"<<grade(marks)<<endl;
  return 0;
}
char grade(int m)
{
  if(m>=80 && m<=100)
    cout<<"Grade: A"<<endl;
  else if(m>=60 && m<=79)
    cout<<"Grade: B"<<endl;
  else if(m>=40 && m<=59)
    cout<<"Grade: C"<<endl;
  else
    cout<<"Grade: F"<<endl;
    return 0;
}
