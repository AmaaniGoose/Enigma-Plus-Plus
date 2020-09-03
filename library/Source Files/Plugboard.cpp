#include "../Header Files/Enigma-Library.h"

void Enigma::set_plug(char a,char b){
	this->plugs.push_back(make_pair(a,b));
}