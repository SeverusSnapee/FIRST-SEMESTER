#include<Mystring.h>
#include<iostream>
using namespace std;

Mystring::Mystring()
{ cout<<"No Arg Constructor";

}
Mystring::Mystring(const char* a)
:str{a} 
{

}