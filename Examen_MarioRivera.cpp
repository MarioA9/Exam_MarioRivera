// Examen_MarioRivera.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "GuessMyNumber.h"
using namespace std;

int main()
{
    system("cls");
    int res=0;
    int option;
    

    do{
    
    
    
    
        cout << "Hey!!! te doy la bienvenida, te gustaria jugar??\n 1.play\n2.exit\n";
        cin >> option;

        switch (option)
        {
        case 1:
            GuessMyNumber();
            break;

        case 2:
            cout << "estas seguro de que quieres salir: \n1.Yes \n2.No\n" << endl;
            cin >> res;
            if (res == 2)
                return main();
            if (res == 1)
                cout << "vuelve pronto";
            break;
        }
    } while (res != 1);
}

