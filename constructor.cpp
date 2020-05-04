#include<iostream>
using namespace std;
class abc{
    public:
    static  int a;
    public:
    abc()
    {
        a++;
        

    }


};
int abc::a=0;
int main()
{
    abc obj1,obj3,obj2,obj4;
    cout<<obj4.a;
return 0;
}
