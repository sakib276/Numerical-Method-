#include<bits/stdc++.h>
using namespace std;
double solve(double x)
{
    return (x*x*x) - (x*x) + 2;
}


int main()
{
    double a, b, c;
    int n;


    cout << "Enter the value of a and b: ";
    cin >> a>> b;

    cout << "Enter the number of iteration: ";
    cin >> n;


    if(solve(a)*solve(b) >= 0)
        cout << "You have guessed wrong a and b!" << endl;
    else
    {
        for(int i = 0; i < n; i++)
        {
            c = (a*solve(b) - b*solve(a))/(solve(b)-solve(a));
            if(solve(c) == 0.0)
                break;
            if(solve(a)*solve(c) >= 0)
                a = c;
            else
                b = c;
        }
        cout << "Root is " << c << endl;
    }


    return 0;
}


