#include "../Header Files/Enigma-Library.h"
#include "Rotor-Dataset.cpp"

void Enigma::setRotors(int slot1,int slot2,int slot3){
	this->rotors[0].first=slot1;
	this->rotors[1].first=slot2;
	this->rotors[2].first=slot3;
}

void Enigma::setOffset(int rotor1,int rotor2,int rotor3){
	this->rotors[0].second=rotor1;
	this->rotors[1].second=rotor2;
	this->rotors[2].second=rotor3;
}
