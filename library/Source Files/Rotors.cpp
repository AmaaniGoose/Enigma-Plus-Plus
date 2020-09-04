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

vector<vector<pair<char,char>>> Rotors=settings();

char Enigma::modify(char key,int n){

	cout<<key<<"->";
	for(int i=0;i<Rotors[n].size();i++){

		if(key==Rotors[n][i].first)
			key=Rotors[n][i].second;

		else if(key==Rotors[n][i].second)
			key=Rotors[n][i].first;
	}
	cout<<key<<" ";

	return key;
}

vector<pair<char,char>> Reflector=reflection();

char Enigma::reflect(char key){

	for(int i=0;i<Reflector.size();i++){

		if(key==Reflector[i].first)
			key=Reflector[i].second;

		else if(key==Reflector[i].second)
			key=Reflector[i].first;
	}

	return key;
}