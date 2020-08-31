#ifndef ENIGMA_H
#define ENIGMA_H

#include<vector>

using namespace std;

class Enigma{
	
	private:

		char capitalize(char c);

		vector<pair<int,int>> Rotors;

		vector<pair<char,char>> plugboard;

	public:

		void set_rotor(int i, int j, int k);

		// void (int i,int j,int k);

		void set_plug(char in,char out);
		
		void get_plug();

		string encode(string message);
		
		string decode(string ciphertext);

};

#endif