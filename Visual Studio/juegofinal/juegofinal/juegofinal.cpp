// prueba.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace System;
using namespace std;

#define posx 20
#define posy 5

int matriz2[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1 },
	{ 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, 1, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz9[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 20, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 1, 3, 1, 1, 1, 0, 1, 1, 1, 0, 1 },
	{ 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 20, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 20, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz1[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 20, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 0, 0, 0, 1, 20, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 1, 3, 1, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1 },
	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 20, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 20, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz3[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 20, 0, 0, 1, 1, 1, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 20, 1, 0, 1, 0, 1, 0, 20, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 1, 3, 1, 0, 1, 1, 0, 0, 0, 1 },
	{ 5, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 2 },
	{ 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 20, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 20, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 20, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz4[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 8, 1 },
	{ 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 4, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1 },
	{ 1, 0, 20, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1 },
	{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1, 1, 3, 1, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 20, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 20, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 0, 1, 1, 0, 20, 0, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 6, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz5[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
	{ 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
	{ 1, 0, 1, 20, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 20, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 3, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 20, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 11, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 16, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 11, 0, 0, 1, 0, 0, 0, 19, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 0, 16, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz6[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 11, 0, 1 },
	{ 1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 20, 1 },
	{ 1, 0, 16, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 19, 0, 1 },
	{ 1, 0, 19, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 20, 0, 1, 1, 1, 0, 11, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1, 3, 1, 0, 16, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 1, 0, 1 },
	{ 1, 20, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 20, 0, 0, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 1, 0, 20, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };

int matriz7[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 12, 0, 0, 0, 11, 0, 0, 0, 1, 14, 0, 0, 20, 0, 0, 1 },
	{ 1, 1, 1, 0, 1, 0, 16, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1 },
	{ 1, 20, 0, 0, 1, 0, 19, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 11, 0, 1, 1, 20, 1, 1 },
	{ 1, 0, 11, 0, 1, 0, 20, 1, 1, 1, 0, 16, 0, 11, 0, 0, 0, 1 },
	{ 1, 0, 16, 0, 0, 0, 0, 1, 3, 1, 0, 19, 0, 16, 0, 1, 0, 1 },
	{ 1, 0, 19, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 19, 0, 1, 0, 0 },
	{ 1, 0, 1, 0, 11, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 16, 0, 0, 11, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1 },
	{ 1, 0, 0, 0, 19, 0, 0, 16, 0, 1, 0, 1, 0, 0, 0, 20, 0, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 19, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1 },
	{ 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 20, 1, 0, 1, 1 },
	{ 1, 1, 13, 1, 0, 1, 0, 1, 0, 1, 0, 1, 15, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };




void multichar(char a, int n){
	for (int i = 0; i<n; i++){
		cout << a;
	}
}

void introduccion(){
	cout << "\t\t\t\t Reglas del juego : " << endl;
	cout << "\t\t"; multichar('=', 50); cout << endl << endl << endl;
	cout << "\t\t  Presiona W para moverte hacia arriba" << endl;
	cout << "\t\t  Presiona A para moverte hacia la izquierda" << endl;
	cout << "\t\t  Presiona S para moverte hacia abajo" << endl;
	cout << "\t\t  Presiona D para moverte hacia la derecha" << endl << endl;
	cout << "\t\t"; Console::ForegroundColor = ConsoleColor::Red; cout << char(1) << " - El jugador: " << endl;
	cout << "\t\t"; Console::ForegroundColor = ConsoleColor::DarkMagenta; cout << char(64) << " - El enemigo" << endl;
	cout << "\t\t"; Console::ForegroundColor = ConsoleColor::White; cout << char(219) << " - Portales" << endl;
	cout << "\t\t"; Console::ForegroundColor = ConsoleColor::Green; cout << char(219) << " - Paredes ajustables" << endl;
	cout << "\t\t"; Console::ForegroundColor = ConsoleColor::White; cout << char(250) << " - Flores" << endl;
	cout << "\t\t"; Console::ForegroundColor = ConsoleColor::Blue; cout << char(219) << " - Paredes " << endl;
	Console::ForegroundColor = ConsoleColor::Gray;
	cout << "\t\t\n\n    Presiona cualquier tecla para continuar...";
	getch();
	Console::Clear();
}

void PerdisteVida(){
	Console::BackgroundColor = ConsoleColor::Black;
	Console::ForegroundColor = ConsoleColor::Gray;
	Console::Clear();
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\tPerdiste una vida..." << endl;
	cout << "\t\t\tPresiona una tecla para continuar...";
	_getch();
	Console::Clear();
}

void generarmapa(int matriz[15][18]){

	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 18; j++){
			Console::SetCursorPosition(j + posx, i + posy);
			if (matriz[i][j] == 1){
				Console::ForegroundColor = ConsoleColor::Blue;
				cout << char(219);
			}
			if (matriz[i][j] == 3){
				Console::ForegroundColor = ConsoleColor::Green;
				cout << char(219);
			}
			if (matriz[i][j] == 0){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(250);
			}
			if (matriz[i][j] == 7){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 8){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 9){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 5){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 2){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 4){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 6){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 10){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 11){
				Console::ForegroundColor = ConsoleColor::Green;
				cout << char(219);
			}
			if (matriz[i][j] == 19){
				Console::ForegroundColor = ConsoleColor::Green;
				cout << char(219);
			}
			if (matriz[i][j] == 12){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 13){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 14){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 15){
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
			if (matriz[i][j] == 16){
				Console::ForegroundColor = ConsoleColor::Yellow;
				cout << char(219);
			}
			if (matriz[i][j] == 20){
				_sleep(10);
				Console::ForegroundColor = ConsoleColor::Yellow;
				cout << char(3);
				_sleep(30);
				Console::ForegroundColor = ConsoleColor::Red;
				cout << char(3);
				_sleep(50);
				Console::ForegroundColor = ConsoleColor::Blue;
				cout << char(3);
			}
		}
	}
}



void dibujapersonaje(int x, int y){
	Console::SetCursorPosition(x + posx, y + posy);
	Console::ForegroundColor = ConsoleColor::Red;
	cout << char(1);
}

void personaje(int &x, int &y, char tecla, int matriz[15][18]){
	int i;
	tecla = getch();
	tecla = tolower(tecla);
	Console::SetCursorPosition(x + posx, y + posy);
	cout << " ";

	switch (tecla){
	case 'w': if (matriz[y - 1][x] != 1)y--; break;
	case 'a': if (matriz[y][x - 1] != 1)x--; break;
	case 's': if (matriz[y + 1][x] != 1)y++; break;
	case 'd': if (matriz[y][x + 1] != 1)x++; break;
	}
}

void predistevida(){
	Console::Clear();
	cout << "Perdiste una vida";
	getch();
	Console::Clear();
}

/*void fantasma(int matriz2[15][18]){
int x1 = 32, y1 = 8, a = 1;

_sleep(200);
Console::SetCursorPosition(x1, y1);
cout << char(0);
x1 = x1;
y1 = y1 + a;
if (matriz2[y1][x1-posy] == 1)a = a*-1;
Console::SetCursorPosition(x1, y1);
Console::ForegroundColor = ConsoleColor::DarkMagenta;
cout << char(64);

}*/

void moverpersonaje(int &x, int &y, char tecla, int matriz[15][18], int numero_matriz, int c){
	int x1 = 32, y1 = 8, a = 1;
	int x2 = 32, y2 = 14, b = 1;
	int x3 = 26, y3 = 10, d = 1;
	int x4 = 29, y4 = 8, e = 1;
	int x5 = 31, y5 = 15, f = 1;
	int x6 = 28, y6 = 10, g = 1;
	int x7 = 29, y7 = 16, h = 1;
	int x8 = 25, y8 = 16, i = 1;

	while (matriz[y][x] != 3){
		if (numero_matriz == 2){
			_sleep(100);
			Console::SetCursorPosition(x1, y1);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(250);
			x1 = x1;
			y1 = y1 + a;
			if (matriz2[y1 - posy][x1 - posx] == 1){
				a = a*-1;
				y1 = y1 + a;
			}
			Console::SetCursorPosition(x1, y1);
			Console::ForegroundColor = ConsoleColor::DarkMagenta;
			cout << char(64);

			_sleep(50);
			Console::SetCursorPosition(x2, y2);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(250);
			y2 = y2;
			x2 = x2 + b;
			if (matriz2[y2 - posy][x2 - posx] == 1){
				b = b*-1;
				x2 = x2 + b;
			}
			Console::SetCursorPosition(x2, y2);
			Console::ForegroundColor = ConsoleColor::DarkMagenta;
			cout << char(64);
		}

		else
			if (numero_matriz == 9){
				_sleep(100);
				Console::SetCursorPosition(x3, y3);
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(250);
				y3 = y3;
				x3 = x3 + d;
				if (matriz9[y3 - posy][x3 - posx] == 1){
					d = d*-1;
					x3 = x3 + d;
				}
				Console::SetCursorPosition(x3, y3);
				Console::ForegroundColor = ConsoleColor::DarkMagenta;
				cout << char(64);


				_sleep(50);
				Console::SetCursorPosition(x4, y4);
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(250);
				y4 = y4;
				x4 = x4 + e;
				if (matriz9[y4 - posy][x4 - posx] == 1){
					e = e*-1;
					x4 = x4 + e;
				}
				Console::SetCursorPosition(x4, y4);
				Console::ForegroundColor = ConsoleColor::DarkMagenta;
				cout << char(64);

				_sleep(50);
				Console::SetCursorPosition(x5, y5);
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(250);
				x5 = x5;
				y5 = y5 + f;
				if (matriz9[y5 - posy][x5 - posx] == 1){
					f = f*-1;
					y5 = y5 + f;
				}
				Console::SetCursorPosition(x5, y5);
				Console::ForegroundColor = ConsoleColor::DarkMagenta;
				cout << char(64);
			}

		if (numero_matriz == 1){
			_sleep(50);
			Console::SetCursorPosition(x6, y6);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(250);
			y6 = y6;
			x6 = x6 + g;
			if (matriz1[y6 - posy][x6 - posx] == 1){
				g = g*-1;
				x6 = x6 + g;
			}
			Console::SetCursorPosition(x6, y6);
			Console::ForegroundColor = ConsoleColor::DarkMagenta;
			cout << char(64);

			_sleep(50);
			Console::SetCursorPosition(x7, y7);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(250);
			x7 = x7;
			y7 = y7 + h;
			if (matriz1[y7 - posy][x7 - posx] == 1){
				h = h*-1;
				y7 = y7 + h;
			}
			Console::SetCursorPosition(x7, y7);
			Console::ForegroundColor = ConsoleColor::DarkMagenta;
			cout << char(64);
		}

		if (numero_matriz == 3){
			_sleep(100);
			Console::SetCursorPosition(x8, y8);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(250);
			x8 = x8;
			y8 = y8 + i;
			if (matriz3[y8 - posy][x8 - posx] == 1){
				i = i*-1;
				y8 = y8 + i;
			}
			Console::SetCursorPosition(x8, y8);
			Console::ForegroundColor = ConsoleColor::DarkMagenta;
			cout << char(64);
		}


		if (_kbhit()){
			tecla = getch();
			tecla = tolower(tecla);
			Console::SetCursorPosition(x + posx, y + posy);
			cout << " ";

			switch (tecla){
			case 'w': if (matriz[y - 1][x] != 1)y--; break;
			case 'a': if (matriz[y][x - 1] != 1)x--; break;
			case 's': if (matriz[y + 1][x] != 1)y++; break;
			case 'd': if (matriz[y][x + 1] != 1)x++; break;
			}
			Console::SetCursorPosition(x + posx, y + posy);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
		}

		if (matriz[y][x] == char(64)){
			Console::Clear();
			cout << "ASDasda";
		}

		if (matriz[y][x] == 7){
			Console::SetCursorPosition(21, 6);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(21, 9);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 1; y = 4;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 4){
			Console::SetCursorPosition(21, 8);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(22, 6);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 2; y = 1;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 8){
			Console::SetCursorPosition(36, 6);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(21, 17);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 1; y = 12;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 6){
			Console::SetCursorPosition(21, 18);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(35, 6);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 15; y = 1;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 5){
			Console::SetCursorPosition(20, 12);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(36, 12);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 16; y = 7;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 2){
			Console::SetCursorPosition(37, 12);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(21, 12);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 1; y = 7;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 9){
			Console::SetCursorPosition(29, 5);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(29, 18);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 9; y = 13;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 10){
			Console::SetCursorPosition(29, 19);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(29, 6);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 9; y = 1;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 12){
			Console::SetCursorPosition(22, 6);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(22, 17);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 2; y = 12;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 13){
			Console::SetCursorPosition(22, 18);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(23, 6);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 3; y = 1;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 14){
			Console::SetCursorPosition(31, 6);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(33, 18);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 13; y = 13;
			personaje(x, y, tecla, matriz);
		}
		if (matriz[y][x] == 15){
			Console::SetCursorPosition(32, 18);
			Console::ForegroundColor = ConsoleColor::White;
			cout << char(219);
			Console::SetCursorPosition(32, 6);
			Console::ForegroundColor = ConsoleColor::Red;
			cout << char(1);
			x = 12; y = 1;
			personaje(x, y, tecla, matriz);
		}




		if (matriz[y][x] == 3){
			Console::Clear();
			for (int i = 0; i < 20; i++){
				cout << endl;
			}
			cout << " \t\t\t\tPASASTE DE NIVEL....! PRESIONA UNA TECLA";
			getch();
			Console::Clear();
		}
	}
}




int main(array<System::String ^> ^args){
	int x = 3, y = 1;
	int c = 0;
	char tecla = -1;

	/*int matriz2[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1 },
	{ 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, 1, 1, 0, 20, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1 },
	{ 1, 0, 20, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/
	introduccion();
	generarmapa(matriz2);
	dibujapersonaje(x, y);

	moverpersonaje(x, y, tecla, matriz2, 2, c);


	x = 3, y = 1;
	/*int matriz9[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 20, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 1, 3, 1, 1, 1, 0, 1, 1, 1, 0, 1 },
	{ 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 20, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 20, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/


	generarmapa(matriz9);
	dibujapersonaje(x, y);


	moverpersonaje(x, y, tecla, matriz9, 9, c);



	Console::ForegroundColor = ConsoleColor::White;

	x = 3, y = 1;
	/*int matriz1[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 20, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 0, 0, 0, 1, 20, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 1, 3, 1, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1 },
	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 20, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 20, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/

	generarmapa(matriz1);
	dibujapersonaje(x, y);
	moverpersonaje(x, y, tecla, matriz1, 1, c);

	x = 3, y = 1;
	/*int matriz3[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 20, 0, 0, 1, 1, 1, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 20, 1, 0, 1, 0, 1, 0, 20, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 1, 3, 1, 0, 1, 1, 0, 0, 0, 1 },
	{ 5, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 2 },
	{ 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 20, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 20, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 20, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1, 1, 1, 1, 1 } };*/


	generarmapa(matriz3);
	dibujapersonaje(x, y);
	moverpersonaje(x, y, tecla, matriz3, 3, c);



	x = 3, y = 1;
	/*int matriz4[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 8, 1 },
	{ 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 4, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1 },
	{ 1, 0, 20, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1 },
	{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1, 1, 3, 1, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 20, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 20, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 0, 1, 1, 0, 20, 0, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 6, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/

	generarmapa(matriz4);
	dibujapersonaje(x, y);
	moverpersonaje(x, y, tecla, matriz4, 4, c);

	x = 3, y = 1;
	/*int matriz5[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
	{ 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
	{ 1, 0, 1, 20, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 20, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 3, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 20, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 11, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 16, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 11, 0, 0, 1, 0, 0, 0, 19, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 0, 16, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/

	generarmapa(matriz5);
	dibujapersonaje(x, y);
	moverpersonaje(x, y, tecla, matriz5, 5, c);

	x = 3, y = 1;
	/*int matriz6[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 11, 0, 1 },
	{ 1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 20, 1 },
	{ 1, 0, 16, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 19, 0, 1 },
	{ 1, 0, 19, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1 },
	{ 1, 0, 1, 0, 0, 20, 0, 1, 1, 1, 0, 11, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1, 3, 1, 0, 16, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 1, 0, 1 },
	{ 1, 20, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 20, 0, 0, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 1, 0, 20, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/

	generarmapa(matriz6);
	dibujapersonaje(x, y);
	moverpersonaje(x, y, tecla, matriz6, 6, c);


	x = 3, y = 1;
	/*int matriz7[15][18] = {//23filAA Y 22columnas
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 12, 0, 0, 0, 11, 0, 0, 0, 1, 14, 0, 0, 20, 0, 0, 1 },
	{ 1, 1, 1, 0, 1, 0, 16, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1 },
	{ 1, 20, 0, 0, 1, 0, 19, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 11, 0, 1, 1, 20, 1, 1 },
	{ 1, 0, 11, 0, 1, 0, 20, 1, 1, 1, 0, 16, 0, 11, 0, 0, 0, 1 },
	{ 1, 0, 16, 0, 0, 0, 0, 1, 3, 1, 0, 19, 0, 16, 0, 1, 0, 1 },
	{ 1, 0, 19, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 19, 0, 1, 0, 0 },
	{ 1, 0, 1, 0, 11, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 16, 0, 0, 11, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1 },
	{ 1, 0, 0, 0, 19, 0, 0, 16, 0, 1, 0, 1, 0, 0, 0, 20, 0, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 19, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1 },
	{ 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 20, 1, 0, 1, 1 },
	{ 1, 1, 13, 1, 0, 1, 0, 1, 0, 1, 0, 1, 15, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };*/

	generarmapa(matriz7);
	dibujapersonaje(x, y);
	moverpersonaje(x, y, tecla, matriz7, 7, c);
	cout << "tu puntaje fue de ? " << c;
	getch();

}