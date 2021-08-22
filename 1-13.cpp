#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main()
{
    auto a = 5.0;
    while(a-1 > 1e-8) {
        a = sqrt(a);
        cout << fixed << setprecision(9) << a << ", "<<endl;
    }
    cout << endl;
    return 0;
}