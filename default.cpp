#include<iostream>
using namespace std;


inline int sq(int a)
{
    return a*a;
}
inline int cube (int b)
{
    return b*b*b;
}

int main ()
{
    cout<<"square of number="<<sq (5);
    cout<<"cube of number="<<cube (2);
     
    return 0;

}

