#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, A, B;
    cout << "Enter x: ";
    cin >> x;

    
    if (x < 1) {
        A = 0.3 * x * x;
        B = 8 * x + 1;
        y = A + B;
    }
    else if (x >= 1 && x < 5) {
        A = 1 / (x * x) + 4;
        B = atan((x + 6) / 2) + exp(x);
        y = A - B;
    }
    else {
        A = sqrt(1 + sqrt(x));
        B = 0; 
        y = A;
    }

    cout << "Method 1) y = " << y << endl;

    
    if (x < 1) {
        A = 0.3 * x * x;
        B = 8 * x + 1;
        y = A + B;
    }
    else if (x >= 1 && x < 5) {
        A = 1 / (x * x) + 4;
        B = atan((x + 6) / 2) + exp(x);
        y = A - B;
    }
    else {
        A = sqrt(1 + sqrt(x));
        B = 0;  
        y = A;
    }

    cout << "Method 2) y = " << y << endl;

    return 0;
}