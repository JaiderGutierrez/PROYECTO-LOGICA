#include <iostream>
using namespace std;

int main() {
    int opcionJugador, opcionComputadora;
    bool salir = false;

    cout << "¡Bienvenido al juego de Piedra, Papel o Tijera!" << endl;

    do {
    cout << "\nElige una opción:\n1. Piedra\n2. Papel\n3. Tijera\n0. Salir\nTu elección: ";
    cin >> opcionJugador;
        
    if (opcionJugador < 0 || opcionJugador > 3) {
    cout << "Opción inválida. Intenta de nuevo." << endl;
    continue;
    }
        
    if (opcionJugador == 0) {
    cout << "¡Gracias por jugar! Hasta la próxima." << endl;
    break;
    }

    opcionComputadora = (opcionJugador % 3) + 1;
    
    cout << "Tú elegiste: ";
    if (opcionJugador == 1) cout << "Piedra" << endl;
    else if (opcionJugador == 2) cout << "Papel" << endl;
    else if (opcionJugador == 3) cout << "Tijera" << endl;
    
    cout << "La computadora eligió: ";
    if (opcionComputadora == 1) cout << "Piedra" << endl;
    else if (opcionComputadora == 2) cout << "Papel" << endl;
    else if (opcionComputadora == 3) cout << "Tijera" << endl;
    
    if (opcionJugador == opcionComputadora) {
    cout << "¡Es un empate!" << endl;
    } else if ((opcionJugador == 1 && opcionComputadora == 3) || 
    (opcionJugador == 2 && opcionComputadora == 1) || 
    (opcionJugador == 3 && opcionComputadora == 2)) {
    cout << "¡Ganaste esta ronda!" << endl;
    } else {
    cout << "La computadora ganó esta ronda." << endl;
    }

    } while (!salir);

    return 0;
}
