#ifndef EnigmaM4.H
#define EnigmaM4.H

#include<string>
#include<vector>
using namespace std;

class Enigma {
    private:
        vector<pair<int,char>> rotors=vector<pair<int,char>>(3);
        vector<int> reflector=vector<int>(2);

        vector<pair<char,char>> plugs=vector<pair<char,char>>(10);

        void swapPlugs(string msg);
    public:
        void setup(string rotors, string initstate, string plugs);
    
        string convert(string plaintext);
};

#endif
