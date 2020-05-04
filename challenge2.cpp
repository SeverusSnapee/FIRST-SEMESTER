#include<iostream>
using namespace std;
int main()
{ int small_rooms,large_rooms,cost,tax;
cout<<"Enter the number of small rooms"<<endl;
cin>>small_rooms;
cout<<"Enter the number of large rooms"<<endl;
cin>>large_rooms;
cost=(small_rooms*25)+(large_rooms*35);
tax=cost*(6/100);
cout<<"Total Cost :"<<cost<<"endl";
cout<<"Total Tax: "<<tax<<"endl";
cout<<"Total estimate is :"<<tax+cost<<"endl";
cout<<"This estimate is valid for 30 days only.";
   
}