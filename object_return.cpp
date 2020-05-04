#include<iostream>
using namespace std;
class greater{
public:
int a;
int get(){cin>>a;
return a;}
greater great(greater x, greater y)
{
if(x.get()>y.get())
return x;
else return y;  
}
}obj1,obj2,obj3;
int main()
{
obj3=obj1.great(obj1,obj2);
cout<<obj3.a;
return 0;
}
