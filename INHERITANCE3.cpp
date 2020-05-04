#include<iostream>
using namespace std;
class cement{
public:
int bags()
{
cout<<"Enter no of bags";
int n;
cin>>n;
}
}obj1;
class steel{
    public:
int steel1()
{
    cout<<"Enter the amount of steel in ton\n";
    int steel;
    cin>>steel;
    return steel;
}
}obj2;
class wood{
public:
int wood1;
int wood2()
{
cout<<"Enter the wood amount\n";
cin>>wood1;
return wood1;
}
}obj3;
class house:public cement,public steel,public wood
{public:
    int amount()
{
    int x=obj1.bags();
    int y=obj2.steel1();
    int z=obj3.wood2();
cout<<"Price of bags "<<x*150;
cout<<"\nPrice of steel "<<2800*y;
cout<<"\nPrice of wood "<<1500*z;
}

}obj;
int main()
{
obj.amount();
}
