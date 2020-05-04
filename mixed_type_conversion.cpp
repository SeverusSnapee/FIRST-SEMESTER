#include<iostream>
using namespace std;
int main()
{int total{0};
int num1{0},num2{0},num3{0};
const int count{3};
cout<<"Enter three variables Separted by spaces ";
cin>>num1>>num2>>num3;
total=num1+num2+num3;
double average{0.0};
average=total/count; 
cout<<"The Three Numbers you added were "<<num1<<" "<<num2<<" "<<num3<<endl;
cout<<"The total is "<<total<<endl;
cout<<"The Average is "<<average;

return 0;


}