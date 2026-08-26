#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int n=0;
    cout<<"Enter a number: ";
    cin>>n;
    int fc = 0;
    fc = factorial(n);
    cout<<n<<"! = "<<fc<<endl;
    return 0;
}

int factorial(int n)
{
    int f=0;
    if(n<=1 && n>=0)
        return 1;
    if(n-1>0)
        return n*factorial(n-1);
}
