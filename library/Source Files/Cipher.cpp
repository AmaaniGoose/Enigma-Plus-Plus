#include "../Header Files/Enigma-Library.h"

string Enigma::encrypt(string message){

	capitalize(message);

	swap(message);

	return message;

}