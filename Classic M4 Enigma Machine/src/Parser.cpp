#include "API.h"

string Enigma::setup(string rotors,string initstate,string plugs){
    for(int i=0;i<3;i++){
        this->rotors[i].first=rotors[i]-49;
        this->rotors[i].second=initstate[i];
    }

    this->rotors[0].first=rotors[i]-98;
    this->rotors[0].second=initstate[i];
    this->rotors[1].first=rotors[i]-66;
    this->rotors[1].second=initstate[i];

    for(int i=0;i<(plugs.size()+1)/3;i+=3){
        this->plugs[i].first=plugs[i];
        this->plugs[i].second=plugs[i+1]
    }
}