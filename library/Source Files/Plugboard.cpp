#include "../Header Files/Enigma-Library.h"

void Enigma::setPlug(char key1,char key2){

	this->plugs.push_back(make_pair(key1,key2));

}

void Enigma::swap(string &data){

	for(int i=0;i<data.size();i++)

		for(int j=0;j<this->plugs.size();j++)

			if(data[i]==plugs[j].first)
				data[i]=plugs[j].second;

			else if(data[i]==plugs[j].second)
				data[i]=plugs[j].first;

}