#include <iostream>
#include <cmath>

using namespace std;

float E;

double funcion(double x) {
    // Define la funci�n aqu�. Por ejemplo, f(x) =
    return x*x*x*x-5*x*x*x+0.5*x*x-11*x+10;
}

void biseccion(double a, double b) {
	
	
    if (funcion(a) * funcion(b) >= 0) {
        cout << "No puedes usar el m�todo de bisecci�n\n";
        return;
    }

    double c = a;

    while ((b-a) >= E) {
        // Encuentra el punto medio
        c = (a+b)/2;

        // Verifica si el punto medio es la ra�z
        if (funcion(c) == 0.0)
            break;

        // Decide el lado para repetir los pasos
        else if (funcion(c)*funcion(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "La ra�z es: " << c;
}

int main() {
	
    // Valores iniciales supuestos
    float a, b;
    
    cout<<"Ingrese el valor de [a]: ";
    cin>>a;
    cout<<"Ingrese el valor de [b]: ";
    cin>>b;
    cout<<"Defina la precision requerida E: ";
    cin>>E;
    
    biseccion(a, b);
    
    
    return 0;
}

