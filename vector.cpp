#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
 {vector<char> vect;
char a[5]={'a','b','c','d','e'};
  vect.insert(vect.end(),a,a+5);
    for (char x : vect) 
        cout << x << " "; 
  

return 0;
}