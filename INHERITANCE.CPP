#include<iostream>
#include<stdio.h>
using namespace std;
class item{
    public:
char Item_no;
char name;
int price{0};
int n;

int Price()
{int b,c;
cout<<"Item List\nS.No   ITEM NAME  Price\n1     Kurkure   20\n2     Lays     20\n3     chochalate 150\n4      Eggs   120";

cout<<"\nEnter The Item you wanna buy\n";
cin>>b;
cout<<"How many do you wanna buy\n";
cin>>c;

int amount{0};
if(b==1){amount=20*c;}
if(b==2){amount=20*c;}
if(b==3){amount=50*c;}
if(b==4){amount=120*c;}                         

return amount;}

}obj;
class discounted:public item
{
    public:
int discount()
{
int f=obj.Price();
cout<<f;
    int discount1{0};
if(f>50) 
{discount1=f-20;cout<<"\nAmount after discount is "<<discount1; }
else if(f>100) 
{discount1=f-40;cout<<"\nAmount after discount is "<< discount1;} 

}
};
int main()
{     discounted a;
a.discount();

return 0;
}