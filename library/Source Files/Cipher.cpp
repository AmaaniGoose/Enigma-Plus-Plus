#include "../Header Files/Enigma-Library.h"

string Enigma::encrypt(string message){

	capitalize(message);

	swap(message);

	return message;

}

string Enigma::decrypt(string message){

	capitalize(message);

	swap(message);

	return message;

}