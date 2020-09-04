#ifndef ENIGMA.H
#define ENIGMA.H

#include<vector>
using namespace std;

class Enigma {

	private:

		vector<pair<int,int>> rotors=vector<pair<int,int>>(3);
		vector<pair<char,char>> plugs=vector<pair<char,char>>(10);

		void capitalize(string &data);
		void swap(string &data);

	public:

		void setRotors(int slot1,int slot2,int slot3);
		void setOffset(int rotor1,int rotor2,int rotor3);

		void setPlug(char key1,char key2);

		string encrypt(string message);
		string decrypt(string ciphertext);
};

#endif
