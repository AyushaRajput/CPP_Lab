#include <iostream>
using namespace std;
int main() 
{
    int a;
    int b;
    int c;
cout << "put any three numbers:"<<endl;

cin >>a;
cin >>b;
cin >> c;

if (a>=b && a>=c)
{
    cout << "the largest number is :"<<a;
    }
    if (b>=a && b>=c) 
    {
        cout << "the largest number is :" << b;
    }
    if (c>=b && c>=a)
    {
    cout<< " the largest number is:"<< c;
    }
    return 0;
}