#include <iostream>
using namespace std;

int main() {
    int opcionJugador, opcionComputadora;
    bool salir = false;

    cout << "�Bienvenido al juego de Piedra, Papel o Tijera!" << endl;

    do {
    cout << "\nElige una opci�n:\n1. Piedra\n2. Papel\n3. Tijera\n0. Salir\nTu elecci�n: ";
    cin >> opcionJugador;
        
    if (opcionJugador < 0 || opcionJugador > 3) {
    cout << "Opci�n inv�lida. Intenta de nuevo." << endl;
    continue;
    }
        
    if (opcionJugador == 0) {
    cout << "�Gracias por jugar! Hasta la pr�xima." << endl;
    break;
    }

    opcionComputadora = (opcionJugador % 3) + 1;
    
    cout << "T� elegiste: ";
    if (opcionJugador == 1) cout << "Piedra" << endl;
    else if (opcionJugador == 2) cout << "Papel" << endl;
    else if (opcionJugador == 3) cout << "Tijera" << endl;
    
    cout << "La computadora eligi�: ";
    if (opcionComputadora == 1) cout << "Piedra" << endl;
    else if (opcionComputadora == 2) cout << "Papel" << endl;
    else if (opcionComputadora == 3) cout << "Tijera" << endl;
    
    if (opcionJugador == opcionComputadora) {
    cout << "�Es un empate!" << endl;
    } else if ((opcionJugador == 1 && opcionComputadora == 3) || 
    (opcionJugador == 2 && opcionComputadora == 1) || 
    (opcionJugador == 3 && opcionComputadora == 2)) {
    cout << "�Ganaste esta ronda!" << endl;
    } else {
    cout << "La computadora gan� esta ronda." << endl;
    }

    } while (!salir);

    return 0;
}
