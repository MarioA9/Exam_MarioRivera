#pragma once
#include <iostream>
#include <ctime>
using namespace std;

void GuessMyNumber()
{	
	system("cls");	
	int max, min;	
	int Guess;
	int intentos=0;	
	int dist;
	int ans;
	int s=0;
			
	do {
		cout << "elige el rango menor a adivinar porfavor" << endl;
		cin >> min;
		cout << "elige el rango mayor a adivinar por favor" << endl;
		cin >> max;
		int secret = rand() % max + min;
		srand(time(NULL));
		cout << secret << endl;
		do {
			cout << "adivina el numero entre el " << min << " y " << max << endl;
			cin >> Guess;
			if (Guess == secret)
			{
				cout << "lo lograste!!! lo adivinaste en " << intentos << " intentos" << endl;
			}
			else {
				if (Guess < secret)
				{
					dist = secret - Guess;
					cout << "el numero a adivinar es mas alto, sigue intentando" << endl;
					intentos = intentos + 1;
					if (dist < 5)
					{
						cout << "uy estas muy cerca, vamos no te rindas!!!" << endl;
					}
				}
				else {
					if (Guess > secret)
					{
						dist = Guess - secret;
						cout << "el numero a adivinar es mas bajo, sigue intentando" << endl;
						intentos = intentos + 1;
						if (dist < 5)
						{
							cout << "uy estas muy cerca, vamos no te rindas!!!" << endl;
						}
					}
				}
			}

		} while (Guess != secret);

		cout << "deseas jugar otra vez? \n1.si \n2.no" << endl;
		cin >> ans;
		if (ans != 1) {
			system("cls");
			return void(GuessMyNumber);
		}
	} while (ans != 2);
}