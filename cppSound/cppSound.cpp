// cppSound.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{	
	while (true) {
		if (_getch() == 'a') {
			PlaySound(TEXT("c://CYCdh_AcouKick-02.wav"), NULL, SND_FILENAME);
			}
		if (_getch() == 's') {
			PlaySound(TEXT("c://CYCdh_Snare-02.wav"), NULL, SND_FILENAME);
		}
		if (_getch() == 'd') {
			PlaySound(TEXT("c://CYCdh_Kick-02.wav"), NULL, SND_FILENAME);
		}
	}
	
	

    
}
