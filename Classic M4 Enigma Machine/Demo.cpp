#include<iostream>
using namespace std;

#include<enigmaM4.h>

int main(){
    Enigma enigma;

    enigma.setup("247BB","EZB","SZ GT DV KU FO MY EW JN IX LQ");

    string plaintext="Hello, World!";

    ciphertext=enigma.encrypt(plaintext);
    cout<<"Encoded Message: "<<ciphertext;

    plaintext=anigma.decrypt(ciphertext);
    cout<<"Decoded Message: "<<plaintext;

}