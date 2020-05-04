#include<iostream>
#include"accounts.hpp"
using namespace std;
int main()
{
    Account frank;
    frank.set_name("Frank's Account");
    frank.set_balance(2000);
    if(frank.deposit(200))
    
        cout<<"Deposit allowed\n";
        else cout<<"Deposit Not allowed\n";
    if(frank.withdraw(1000))
cout<<"Withdraw allowed\n";
else cout<<"Not Allowed\n";
return 0;
}