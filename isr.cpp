#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sueldoMensual, sueldoAnual, isrAnual, isrMensual;
    char continuar;

    do {
        cout << "===== CALCULO DEL ISR (DGII - Rep. Dominicana 2026) =====" << endl;
        cout << "Ingrese el sueldo mensual (RD$): ";
        cin >> sueldoMensual;

        if (sueldoMensual < 0) {
            cout << "Error: el sueldo no puede ser negativo." << endl;
        } else {
            sueldoAnual = sueldoMensual * 12;

            if (sueldoAnual <= 416220.00) {
                isrAnual = 0;
            } else if (sueldoAnual <= 624329.00) {
                isrAnual = (sueldoAnual - 416220.00) * 0.15;
            } else if (sueldoAnual <= 867123.00) {
                isrAnual = 31216.00 + (sueldoAnual - 624329.00) * 0.20;
            } else {
                isrAnual = 79776.00 + (sueldoAnual - 867123.00) * 0.25;
            }

            isrMensual = isrAnual / 12;

            cout << fixed << setprecision(2);
            cout << "\n----- RESULTADO -----" << endl;
            cout << "Sueldo mensual:      RD$ " << sueldoMensual << endl;

            if (isrMensual == 0) {
                cout << "Descuento de ISR:    0 (N/A - no aplica descuento)" << endl;
            } else {
                cout << "Descuento de ISR:    RD$ " << isrMensual << endl;
            }

            cout << "Sueldo despues ISR:  RD$ " << sueldoMensual - isrMensual << endl;
        }

        cout << "\nDesea calcular otro sueldo? (s/n): ";
        cin >> continuar;
        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado." << endl;
    return 0;
}
