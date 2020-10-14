#ifndef EnigmaM4
#define EnigmaM4

#include<string>
#include<vector>
using namespace std;

class Enigma {
    private:
    public:
        void setup(string, string, string);
        string encrypt(string message);
        string decrypt(string message);
};

#endif EnigmaM4
