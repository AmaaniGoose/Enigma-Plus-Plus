#include "enigma.h"
// #include<iostream>
// using namespace std;

char Enigma::capitalize(char c){
	return c-32;
}

void Enigma::set_plug(char in,char out){
	if(this->plugboard.size()>10)
		return;
	in=capitalize(in);
	out=capitalize(out);
	this->plugboard.push_back(make_pair(in,out));
}

void Enigma::get_plug(){
	for(int i=0;i<this->plugboard.size();i++)
		cout<<this->plugboard[i].first<<" "<<this->plugboard[i].second<<endl;
}