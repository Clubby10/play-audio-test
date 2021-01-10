#include <windows.h>
#include <iostream>

#pragma comment(lib, "winmm.lib")

using namespace std;

int main(int argc, char* argv[]) {

	// menu type beat
	SetConsoleTitle("Play Audio by Clubby10");
	system("color 3");
	cout << "Play Audio Test\n";
	cout << "By: Clubby10 (github.com/clubby10)\n";
	Sleep(800);

	system("cls");

	//fake loading sorry lol i think it looks nice
	system("color 5");
	cout << "(10%) Loading...\n";
	Sleep(250);
	cout << "(25%) Loading...\n";
	Sleep(250);
	cout << "(45%) Loading...\n";
	Sleep(250);
	cout << "(70%) Loading...\n";
	Sleep(250);
	cout << "(85%) Loading...\n";
	Sleep(250);
	cout << "(95%) Loading...\n";
	Sleep(250);
	cout << "(100%) DONE!\n";
	Sleep(800);

	system("cls");
	system("color 3");
	
	// audio party
	cout << "Now Playing - Riot by lil Skies\n";
	PlaySound("audio.wav", NULL, SND_APPLICATION); // put the wav file in the relase folder of this project or where u download the exe 
	return 0;

}

// this is just a test for something else im going to be making
