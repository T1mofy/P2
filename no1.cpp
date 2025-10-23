#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Groesse (Bober) von char: " << sizeof(char) << " bytes\n";
    cout << "Groesse (Jezhik) von int: " << sizeof(int) << " bytes\n";
    cout << "Groesse (KURWA) von unsigned int: " << sizeof(unsigned int) << " bytes\n";

    /*
sizeof - ein Operator in C++:
Mit sizeof kann die Groesse (in Bytes) eines Datentyps oder einer Variablen ermittelt werden.

Er gibt die Anzahl der Bytes zurück, die zum Speichern eines Wertes dieses Typs benötigt werden.

BYTES - Einheit der Groesse:
Ein Byte besteht aus 8 Bits und ist die kleinste adressierbare Speichereinheit in den meisten Computersystemen.
*/

    int char_max = numeric_limits<char>::max();
    cout << "Maximaler Wert von char: " << char_max << "\n";

    int char_min = numeric_limits<char>::min();
    cout << "Minimaler Wert von char: " << char_min << "\n";

    int int_max = numeric_limits<int>::max();
    cout << "Maximaler Wert von int: " << int_max << "\n";

    int int_min = numeric_limits<int>::min();
    cout << "Minimaler Wert von int: " << int_min << "\n";

    unsigned int uint_max = numeric_limits<unsigned int>::max(); // int max = 2147483647, unsigned int max = 4294967295, deswegen statt int -> unsigned int (wenn die Zahl groesser als 2147483647 ist, wird -1 ausgegeben (dat wollen wir ja nicht))
    cout << "Maximaler Wert von unsigned int: " << uint_max << "\n"; 

    unsigned int uint_min = numeric_limits<unsigned int>::min();
    cout << "Minimaler Wert von unsigned int: " << uint_min << "\n";

    return 0;
}
