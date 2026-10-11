
#include <iostream>
#include <string>

std::string clasificarFrecuenciaCardiaca(int latidos) {
    if (latidos < 60) {
        return "bradicardia";
    } else if (latidos <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

int main() {
    int fc;
    std::cout << "Ingrese la frecuencia cardiaca (latidos por minuto): ";
    std::cin >> fc;

    std::cout << "Resultado: " << clasificarFrecuenciaCardiaca(fc) << std::endl;

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