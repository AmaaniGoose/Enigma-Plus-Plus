#ifndef ENIGMA.H
#define ENIGMA.H

#include<bits/stdc++.h>
using namespace std;

class Enigma {
	private:
		void capitalize(string &str);
		vector<int> rotors=vector<int>(3);
		vector<int> offset=vector<int>(3);
		vector<pair<char,char>> plugs;
	public:
		string encrypt(string message);
		string decrypt(string ciphertext);
		void set_rotor(int i,int j,int k);
		void set_offset(int i,int j,int k);
		void set_plug(char a,char b);
};

#endif
