#include<iostream>
#include<math.h>
#include<string.h>         
using namespace std;
class phone{
public:
int std_code{0},exchange_code{0};
string phone_number{};   
}phone1;
int first(int x)
{int f=0;
int y=x;
while(x>0)
{x=x/10;
 f++;   
}
y=y+pow(10,f-1);
return y;
}
string swap(string m)
{
char o=m[0];
m[0]=m[1];
m[1]=o;
return m;               
}
int main()
{
cout<<"Enter The Std Code\n";
cin>>phone1.std_code;
cout<<"Enter The exchange code\n";
cin>>phone1.exchange_code;
cout<<"Enter the Phone Number\n";
cin>>phone1.phone_number;
int l=first(phone1.std_code);
cout<<l<<endl;
string j=swap(phone1.phone_number);
cout<<j;
return 0;
}