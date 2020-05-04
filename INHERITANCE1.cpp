#include<iostream>
#include<string.h>
using namespace std;
class student 
{
    public:
int Roll_no;
string course{};


int Read()
{int n{};
cout<<"How many Students Are there\n";
cin>>n;
char name[n][50];
char course[n][50];
int b[n];
for(int i=0;i<n;++i)
{
cin>>name[i];    

}
cout<<"Enter the Roll Number\n";
for(int i=0;i<n;++i)
{cin>>b[i];
}
cout<<"ENter the Course Names\n";
for(int i=0;i<n;++i)
{cin>>course[i];}
// }
// int show()
// {cout<<"How many students are there\n";
// int x{};
// cin>>x;
    for(int i=0;i<n;++i)
    {
        cout<<"Roll NO- "<<b[i]<<"Course Name"<<course[i];
    }
    
}

};
class Employee
{

int Read()
{int f;
    cout<<"Enter No of Employees\n";
    cin>>f;
    int Salary_per_hour[f];
     int employee_code[f];
     cout<<"Enter Employee Code\n";
    for(int i=0;i<f;++i)
    {
        cin>>employee_code[i];

    }
    for(int i=0;i<f;++i)
    {cin>>Salary_per_hour[i];}
   for(int i=0;i<f;++i)
   {
       cout<<"Employee Name"<<employee_code[i]<<"Salary_per_hour"<<Salary_per_hour[i];
   }
}
};

class Parttimestudent: public student,Employee
{
public:
student obj1;
obj1

};