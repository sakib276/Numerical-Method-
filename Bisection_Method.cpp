#include<bits/stdc++.h>
using namespace std;
double solve(double x)
{
    return (x*x*x+3*x-5);
}
void bisec(double a, double b,int n)
{
    if(solve(a)*solve(b)>=0)
    {
        cout<<"Guess values are incorrect"<<endl;
        return;
    }
    else
    {
        double c;
        for(int i=0; i<n; i++)
        {
            c=(a+b)/2;
            if(solve(c)==0.0)
                break;
            else if(solve(c)*solve(a)<0)
            {
                b=c;
            }
            else
            {
                a=c;
            }
        }
        cout<<"Root value is: "<<c<<endl;
    }
}
int main()


{
    cout<<"Enter two values: "<<endl;
    double a,b;
    int n;
    cin>>a>>b;
    cout<<"Enter number of iteration: "<<endl;
    cin>>n;
    bisec(a,b,n);
    return 0;
}
