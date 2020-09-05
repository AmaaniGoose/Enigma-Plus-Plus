#include "../Header Files/Enigma-Library.h"

void Enigma::capitalize(string &data){

	for (int i=0;i<data.size();i++)
		if (data[i]>='a'&&data[i]<='z')
			data[i]-=32;

}