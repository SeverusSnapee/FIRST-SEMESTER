#include<iostream>
#include<conio.h>
using namespace std;
main()
{int n;
cout<<"Enter the limit of pattern\n";
cin>>n;
for(int i=n;i>=1;i--)
{for(int j=n;j>i;j--)
{ cout<<j<<" ";}
for(int j=0;j<(2*i)-1;++j)
{cout<<i<<" ";}
for(int j=i+1;j<=n;++j)
{cout<<j<<" ";}
cout<<"\n";

}


for(int i=1;i<n;++i)
{for(int j=n;j>(i+1);j--)
{cout<<j<<" ";}
for(int j=1;j<=(2*(i+1)-1);++j)
{ cout<<i+1<<" ";}
for(int j=i+2;j<=n;++j)
{cout<<j<<" ";
}
cout<<"\n";
}
getch();
}