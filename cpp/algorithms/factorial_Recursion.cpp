#include<bits/stdc++.h>
using namespace std;

/**
    Implementation of factorial through recurssion.
 */

long fact(int n) 
{
    if(n == 0)
        return 1;
    else
    {
        return n * fact(n-1);
    }
}
 
int main()
{
    int x;
    cout<<"Enter number for which you want to compute the factorial: \n";
    cin>>x;
    if(x > 0)
        cout<<"Factorial is "<<fact(x)<<".\n";
    else
        cout<<"Number has to be positive.\n";
    return 0;
}
