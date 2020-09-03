#include "../Header Files/Enigma-Library.h"
#include "Rotor-Dataset.cpp"

void Enigma::set_rotor(int i,int j,int k){
	this->rotors[0]=i;
	this->rotors[1]=j;
	this->rotors[2]=k;
}

void Enigma::set_offset(int i,int j,int k){
	this->offset[0]=i;
	this->offset[1]=j;
	this->offset[2]=k;
}
