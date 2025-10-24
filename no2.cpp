#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a=0, b=0, c=0, d=0, x=0, w=0;
    cout << "GIBE DIE TEMPERATUR EIN:";
    cin >> x;

    cout << "WAHLEN SIE DIE EINHEIT DER EINGEGEBENEN TEMPERATUR:\n";

    cout << "Von 1. Celsius\n";
    cout << a << "-->";
    cin >> a;

    cout << "Von 2. Kelvin\n";
    cout << b << "-->";
    cin >> b;

    cout << "zu 3. Celsius\n";
    cout << c << "-->";
    cin >> c;

    cout << "zu 4. Kelvin\n";
    cout << d << "-->";
    cin >> d;

    w = b*c*(x - 273.15) + a*d*(x + 273.15) + a*c*x + b*d*x;
    cout << "DIE KONVERTIERTE TEMPERATUR IST: " << w << endl;

    return 0;
}
