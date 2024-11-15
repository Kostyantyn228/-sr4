#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    double x, u, s = 0.0;

    cout << "Введіть ціле число n і дійсне число x: ";
    cin >> n >> x;
    
    for (int i = 1; i <= n; i++) {
        u = pow(-1, i) * (2 * i - 1) / pow(x, i);
        s += u;
    }

    cout << "Результат обчислення s: " << s << endl;
    return 0;
}
