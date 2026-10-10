
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

    return 0;
}