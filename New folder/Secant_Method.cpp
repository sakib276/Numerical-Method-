#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x * x - 4*x - 10 ;
}
double secantMethod(double x1, double x2)
{
    double x3;
    int i=1 ;
    do
    {
        x3 = x2 - ((f(x2) * (x2 - x1)) / (f(x2) - f(x1)));
        if (abs(x3 - x2) <= 0.001)
            return x3;


        x1 = x2;
        x2 = x3;
        i++ ;
    }
    while (1);
}
int main()
{
    double x1, x2, epsilon;



    cout<< "\tThe Equation is = x^2 -4^x -10 = 0 \n";
    cout << "Enter first initial guess (x1): ";
    cin >> x1;
    cout << "Enter second initial guess (x2): ";
    cin >> x2;




    double root = secantMethod(x1, x2);
    cout << "\n\tRoot of the equation is : " << root << endl;
    return 0;
}






