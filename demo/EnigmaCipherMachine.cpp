#include<bits/stdc++.h>
using namespace std;

// #include "../library/Enigma.h"

int main(){
	// Enigma enigma;

	// enigma.set_rotor(4,2,5);
	// enigma.set_offset(15,23,26);

	// enigma.set_plug('E','J');
	// enigma.set_plug('O','Y');
	// enigma.set_plug('I','V');
	// enigma.set_plug('A','Q');
	// enigma.set_plug('K','W');
	// enigma.set_plug('F','X');
	// enigma.set_plug('M','T');
	// enigma.set_plug('P','S');
	// enigma.set_plug('L','U');
	// enigma.set_plug('B','D');

	// enigma.get_plug();

	// cout<<"Encoded Message: ";
	// cout<<enigma.encrypt("Hello World! 123");

	// cout<<"Decoded Message: ";
	// cout<<enigma.decrypt("ADESF DTDSV");

	string str;
	cin>>str;
	for(int i=0;i<26;i+=2)
		cout<<"Rotors[1].push_back(make_pair('"<<char(65+i)<<"','"<<str[i]<<"'));\tRotors[1].push_back(make_pair('"<<char(66+i)<<"','"<<str[i+1]<<"'));"<<endl;
}