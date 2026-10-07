// лаба 4.3
// варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, xp, xk, dx, F, x;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(6) << "x" << " |"
    << setw(10) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while(x <= xk){
        if (x - 1 < 0 && b-x != 0)
            F = a*x*x + b;
        else
            if (x > 0 && b == 0)
                F = (x - a) / (x - c);
            else
                F = x/c;
        x += dx;

        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << F
        << " |" << endl;
    }

    cin.get();
    return 0;
}