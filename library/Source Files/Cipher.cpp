#include "../Header Files/Enigma-Library.h"

string Enigma::encrypt(string &message){

	capitalize(message);

	swap(message);

	for(int i=0;i<message.size();i++){
		// cout<<message[i]<<"->";
		message[i]=modify(message[i],this->rotors[0].first);
		// cout<<message[i]<<"->";
		message[i]=modify(message[i],this->rotors[1].first);
		// cout<<message[i]<<"->";
		message[i]=modify(message[i],this->rotors[2].first);
		// cout<<message[i]<<"->";
		message[i]=reflect(message[i]);
		// cout<<message[i]<<"->";
		message[i]=modify(message[i],this->rotors[2].first);
		// cout<<message[i]<<"->";
		message[i]=modify(message[i],this->rotors[1].first);
		// cout<<message[i]<<"->";
		message[i]=modify(message[i],this->rotors[0].first);
		cout<<message[i]<<"\n";
	}

	return message;

}

string Enigma::decrypt(string &message){

	return encrypt(message);

}