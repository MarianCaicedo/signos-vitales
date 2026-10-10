
#include <iostream>
using namespace std;

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit;

    cout << "Ingrese la temperatura en Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = fahrenheitACelsius(fahrenheit);

    cout << "Temperatura en Celsius: "
         << celsius << " grados C" << endl;

    return 0;
}
