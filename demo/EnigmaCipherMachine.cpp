#include<iostream>
using namespace std;

#include "../library/Enigma.h"

int main(){

	Enigma enigma;

	// enigma.setRotors(1,2,3);

	// enigma.setOffset(7,19,23);

	enigma.setPlug('B','J');	enigma.setPlug('C','Y');
	enigma.setPlug('D','X');	enigma.setPlug('E','Z');
	enigma.setPlug('F','H');	enigma.setPlug('G','O');
	enigma.setPlug('L','N');	enigma.setPlug('M','W');
	enigma.setPlug('Q','V');	enigma.setPlug('T','U');

	cout<<"Encoded Message: ";
	cout<<enigma.encrypt("Hello World!");

	// cout<<"Decoded Message: ";
	// cout<<enigma.decrypt("ANJUS TKONS!");
}