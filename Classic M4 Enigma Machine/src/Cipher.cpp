#include "API.h"

void refIn(string &msg){
    string ref="";

    for(int i=0;i<msg.size();i++)
        if(msg[i]>='a'&&msg[i]<='z')
            ref+=msg[i]-32;
        else if(msg[i]>='A'&&msg[i]<='Z')
            ref+=msg[i];

    msg=ref;
}

void refOut(string &msg){
    string ref="";

    for(int i=0;i<msg.size();){
        for(int j=0;j<4;j++)
            ref+=msg[i++];
        ref+=" ";
        if(i%16==0)
            ref+="\n";
    }
    ref+="\n";

    msg=ref;
}

string Enigma::convert(string plaintext){
    refIn(plaintext);
    swapPlug(plaintext);
    refOut(plaintext);
}
