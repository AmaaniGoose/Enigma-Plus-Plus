#include<iostream>
using namespace std;

#include "../enigma-library/Enigma.h"

int main(){
	Enigma enigma;

	enigma.set_rotors(4,2,5);
	enigma.set_offset(15,23,26);

	enigma.set_plug('E','J');
	enigma.set_plug('O','Y');
	enigma.set_plug('I','V');
	enigma.set_plug('A','Q');
	enigma.set_plug('K','W');
	enigma.set_plug('F','X');
	enigma.set_plug('M','T');
	enigma.set_plug('P','S');
	enigma.set_plug('L','U');
	enigma.set_plug('B','D');

	cout<<"Encoded Message: ";
	cout<<enigma.encode("Hello World");

	cout<<"Decoded Message: ";
	cout<<enigma.decode("ADESF DTDSV");

}