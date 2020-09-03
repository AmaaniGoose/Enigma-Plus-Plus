#include "../Header Files/Enigma-Library.h"

void Enigma::capitalize(string &str){
	for(int i=0;i<str.size();i++)
		if(str[i]>96&&str[i]<123)
			str[i]-=32;
}