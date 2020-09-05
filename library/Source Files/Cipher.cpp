#include "../Header Files/Enigma-Library.h"

string Enigma::encrypt(string message){

	capitalize(message);

	swap(message);

	for(int i=0;i<message.size();i++){

		modify(&message[i],this->rotors[0].first);
		modify(&message[i],this->rotors[1].first);
		modify(&message[i],this->rotors[2].first);

		reflect(&message[i]);

		modify2(&message[i],this->rotors[2].first);
		modify2(&message[i],this->rotors[1].first);
		modify2(&message[i],this->rotors[0].first);

	}

	return message;

}

string Enigma::decrypt(string message){

	capitalize(message);

	for(int i=0;i<message.size();i++){

		modify(&message[i],this->rotors[0].first);
		modify(&message[i],this->rotors[1].first);
		modify(&message[i],this->rotors[2].first);

		reflect(&message[i]);

		modify2(&message[i],this->rotors[2].first);
		modify2(&message[i],this->rotors[1].first);
		modify2(&message[i],this->rotors[0].first);

	}

	swap(message);

	return message;

}