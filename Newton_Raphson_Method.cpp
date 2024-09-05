#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001
double solve ( double x)
{
    return x*x-3*x+2;
}
double derivative (double x)
{
    return 2*x-3;
}
int main()
{
    double x;
    double a;
    cout<<" enter initial value : ";
    cin>>a;
    cout<<endl;

    double div=solve(a)/derivative(a);

    while(abs(div)>=EPSILON)
    {

        div=solve(a)/derivative(a);
        a=a-div;
    }
    cout<< " ans is : "<<a<<endl;

}
