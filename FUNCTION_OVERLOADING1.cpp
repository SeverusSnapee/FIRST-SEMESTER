#include<iostream>
using namespace std;
class cube{
    public:
int a{};
float b{};
int get(int c){
cout<<c*c*c<<"\n";
cout<<"Integer\n";
}
int get(float d){
cout<<d*d*d;
cout<<"Float \n";
return 0;
}
}obj;
int main()
{int f{};
cout<<"Enter 1 for Integer And Press 2 for float\n";
cin>>f;
if(f==1){
cout<<"Enter the Number";
int l{};
cin>>l;
obj.get(l);
}else if(f==2){cout<<"Enter the number\n";
float g{};
cin>>g;
obj.get(g);}
return 0;
}
