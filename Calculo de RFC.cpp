#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string fechaNacimiento;
    string vocal;
    string rfc;

    cout << "Calculo de RFC" << endl;

    cout << "Introduce tu Nombre: ";
    cin >> nombre;

    cout << "Introduce tu Apellido_Paterno: ";
    cin >> apellidoPaterno;

    cout << "Introduce tu Apellido_Materno: ";
    cin >> apellidoMaterno;

    cout << "Introduce tu Fecha_Nacimiento DD/MM/AAAA: ";
    cin >> fechaNacimiento;

    cout << "Tu nombre es: " << nombre << " " << apellidoPaterno << " " << apellidoMaterno << endl;
    cout << "Tu Fecha_Nacimiento: " << fechaNacimiento << endl;

    // RFC

    rfc = apellidoPaterno.substr(0, 2);
    cout << "Tu RFC sin Homoclave es: " << rfc;

    for (int i = 1; i< apellidoPaterno.length(); ++i)
    {
        char letra = apellidoPaterno[i];
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            vocal += letra;
            break;
        }
    }

    rfc = rfc + vocal;
    cout << "Tu RFC sin Homoclave es: " << rfc << endl;

    rfc = rfc + apellidoMaterno.substr(0, 1);
    cout << "Tu RFC sin Homoclave es: " << rfc << endl;

    rfc = rfc + nombre.substr(0, 1);
    cout << "Tu RFC sin Homoclave es: " << rfc << endl;

    rfc = rfc + fechaNacimiento.substr(8, 2);
    cout << "Tu RFC sin Homoclave es: " << rfc << endl;

    rfc = rfc + fechaNacimiento.substr(3, 2);
    cout << "Tu RFC sin Homoclave es: " << rfc << endl;

    rfc = rfc + fechaNacimiento.substr(0, 2);
    cout << "Tu RFC sin Homoclave es: " << rfc << endl;

    return 0;
}


