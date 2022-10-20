#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, R, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -8 - R)
            y = R;
        else
            if (-8 - R < x && x <= -8 + R)
                y = -sqrt(R * R - (x + 8) * (x + 8)) + R;
            else
                if (-8 + R < x && x <= -4)
                    y = R;
                else
                    if (-4 < x && x <= 2)
                        y = R + ((-1 - R) * (x + 4) / 6);
                    else
                        y = -3 + x;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}

