#include<iostream>
#include"overloading.h"
using namespace std;

void overloading::operator!(int)
{
int f=1;
for(int i=1;i<=n;++i)
{
    f=f*i;
}
cout<<f;
}
int overloading::get()
{
    cin>>n;
}
int main() 
{
    obj.get();
    !obj;
}