#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<char,char>>> settings(){
	vector<vector<pair<char,char>>> Rotors(7);

	Rotors[0].push_back(make_pair('A','L'));	Rotors[0].push_back(make_pair('B','E'));
	Rotors[0].push_back(make_pair('C','Y'));	Rotors[0].push_back(make_pair('D','J'));
	Rotors[0].push_back(make_pair('E','V'));	Rotors[0].push_back(make_pair('F','C'));
	Rotors[0].push_back(make_pair('G','N'));	Rotors[0].push_back(make_pair('H','I'));
	Rotors[0].push_back(make_pair('I','X'));	Rotors[0].push_back(make_pair('J','W'));
	Rotors[0].push_back(make_pair('K','P'));	Rotors[0].push_back(make_pair('L','B'));
	Rotors[0].push_back(make_pair('M','Q'));	Rotors[0].push_back(make_pair('N','M'));
	Rotors[0].push_back(make_pair('O','D'));	Rotors[0].push_back(make_pair('P','R'));
	Rotors[0].push_back(make_pair('Q','T'));	Rotors[0].push_back(make_pair('R','A'));
	Rotors[0].push_back(make_pair('S','K'));	Rotors[0].push_back(make_pair('T','Z'));
	Rotors[0].push_back(make_pair('U','G'));	Rotors[0].push_back(make_pair('V','F'));
	Rotors[0].push_back(make_pair('W','U'));	Rotors[0].push_back(make_pair('X','H'));
	Rotors[0].push_back(make_pair('Y','O'));	Rotors[0].push_back(make_pair('Z','S'));

	Rotors[1].push_back(make_pair('A','F'));	Rotors[1].push_back(make_pair('B','S'));
	Rotors[1].push_back(make_pair('C','O'));	Rotors[1].push_back(make_pair('D','K'));
	Rotors[1].push_back(make_pair('E','A'));	Rotors[1].push_back(make_pair('F','N'));
	Rotors[1].push_back(make_pair('G','U'));	Rotors[1].push_back(make_pair('H','E'));
	Rotors[1].push_back(make_pair('I','R'));	Rotors[1].push_back(make_pair('J','H'));
	Rotors[1].push_back(make_pair('K','M'));	Rotors[1].push_back(make_pair('L','B'));
	Rotors[1].push_back(make_pair('M','T'));	Rotors[1].push_back(make_pair('N','I'));
	Rotors[1].push_back(make_pair('O','Y'));	Rotors[1].push_back(make_pair('P','C'));
	Rotors[1].push_back(make_pair('Q','W'));	Rotors[1].push_back(make_pair('R','L'));
	Rotors[1].push_back(make_pair('S','Q'));	Rotors[1].push_back(make_pair('T','P'));
	Rotors[1].push_back(make_pair('U','Z'));	Rotors[1].push_back(make_pair('V','X'));
	Rotors[1].push_back(make_pair('W','V'));	Rotors[1].push_back(make_pair('X','G'));
	Rotors[1].push_back(make_pair('Y','J'));	Rotors[1].push_back(make_pair('Z','D'));

	Rotors[2].push_back(make_pair('A','E'));	Rotors[2].push_back(make_pair('B','J'));
	Rotors[2].push_back(make_pair('C','M'));	Rotors[2].push_back(make_pair('D','Z'));
	Rotors[2].push_back(make_pair('E','A'));	Rotors[2].push_back(make_pair('F','L'));
	Rotors[2].push_back(make_pair('G','Y'));	Rotors[2].push_back(make_pair('H','X'));
	Rotors[2].push_back(make_pair('I','V'));	Rotors[2].push_back(make_pair('J','B'));
	Rotors[2].push_back(make_pair('K','W'));	Rotors[2].push_back(make_pair('L','F'));
	Rotors[2].push_back(make_pair('M','C'));	Rotors[2].push_back(make_pair('N','R'));
	Rotors[2].push_back(make_pair('O','Q'));	Rotors[2].push_back(make_pair('P','U'));
	Rotors[2].push_back(make_pair('Q','O'));	Rotors[2].push_back(make_pair('R','N'));
	Rotors[2].push_back(make_pair('S','T'));	Rotors[2].push_back(make_pair('T','S'));
	Rotors[2].push_back(make_pair('U','P'));	Rotors[2].push_back(make_pair('V','I'));
	Rotors[2].push_back(make_pair('W','K'));	Rotors[2].push_back(make_pair('X','H'));
	Rotors[2].push_back(make_pair('Y','G'));	Rotors[2].push_back(make_pair('Z','D'));

	Rotors[3].push_back(make_pair('A','Y'));	Rotors[3].push_back(make_pair('B','R'));
	Rotors[3].push_back(make_pair('C','U'));	Rotors[3].push_back(make_pair('D','H'));
	Rotors[3].push_back(make_pair('E','Q'));	Rotors[3].push_back(make_pair('F','S'));
	Rotors[3].push_back(make_pair('G','L'));	Rotors[3].push_back(make_pair('H','D'));
	Rotors[3].push_back(make_pair('I','P'));	Rotors[3].push_back(make_pair('J','X'));
	Rotors[3].push_back(make_pair('K','N'));	Rotors[3].push_back(make_pair('L','G'));
	Rotors[3].push_back(make_pair('M','O'));	Rotors[3].push_back(make_pair('N','K'));
	Rotors[3].push_back(make_pair('O','M'));	Rotors[3].push_back(make_pair('P','I'));
	Rotors[3].push_back(make_pair('Q','E'));	Rotors[3].push_back(make_pair('R','B'));
	Rotors[3].push_back(make_pair('S','F'));	Rotors[3].push_back(make_pair('T','Z'));
	Rotors[3].push_back(make_pair('U','C'));	Rotors[3].push_back(make_pair('V','W'));
	Rotors[3].push_back(make_pair('W','V'));	Rotors[3].push_back(make_pair('X','J'));
	Rotors[3].push_back(make_pair('Y','A'));	Rotors[3].push_back(make_pair('Z','T'));

	Rotors[4].push_back(make_pair('A','F'));	Rotors[4].push_back(make_pair('B','V'));
	Rotors[4].push_back(make_pair('C','P'));	Rotors[4].push_back(make_pair('D','J'));
	Rotors[4].push_back(make_pair('E','I'));	Rotors[4].push_back(make_pair('F','A'));
	Rotors[4].push_back(make_pair('G','O'));	Rotors[4].push_back(make_pair('H','Y'));
	Rotors[4].push_back(make_pair('I','E'));	Rotors[4].push_back(make_pair('J','D'));
	Rotors[4].push_back(make_pair('K','R'));	Rotors[4].push_back(make_pair('L','Z'));
	Rotors[4].push_back(make_pair('M','X'));	Rotors[4].push_back(make_pair('N','W'));
	Rotors[4].push_back(make_pair('O','G'));	Rotors[4].push_back(make_pair('P','C'));
	Rotors[4].push_back(make_pair('Q','T'));	Rotors[4].push_back(make_pair('R','K'));
	Rotors[4].push_back(make_pair('S','U'));	Rotors[4].push_back(make_pair('T','Q'));
	Rotors[4].push_back(make_pair('U','S'));	Rotors[4].push_back(make_pair('V','B'));
	Rotors[4].push_back(make_pair('W','N'));	Rotors[4].push_back(make_pair('X','M'));
	Rotors[4].push_back(make_pair('Y','H'));	Rotors[4].push_back(make_pair('Z','L'));

	Rotors[5].push_back(make_pair('A','E'));	Rotors[5].push_back(make_pair('B','N'));
	Rotors[5].push_back(make_pair('C','K'));	Rotors[5].push_back(make_pair('D','Q'));
	Rotors[5].push_back(make_pair('E','A'));	Rotors[5].push_back(make_pair('F','U'));
	Rotors[5].push_back(make_pair('G','Y'));	Rotors[5].push_back(make_pair('H','W'));
	Rotors[5].push_back(make_pair('I','J'));	Rotors[5].push_back(make_pair('J','I'));
	Rotors[5].push_back(make_pair('K','C'));	Rotors[5].push_back(make_pair('L','O'));
	Rotors[5].push_back(make_pair('M','P'));	Rotors[5].push_back(make_pair('N','B'));
	Rotors[5].push_back(make_pair('O','L'));	Rotors[5].push_back(make_pair('P','M'));
	Rotors[5].push_back(make_pair('Q','D'));	Rotors[5].push_back(make_pair('R','X'));
	Rotors[5].push_back(make_pair('S','Z'));	Rotors[5].push_back(make_pair('T','V'));
	Rotors[5].push_back(make_pair('U','F'));	Rotors[5].push_back(make_pair('V','T'));
	Rotors[5].push_back(make_pair('W','H'));	Rotors[5].push_back(make_pair('X','R'));
	Rotors[5].push_back(make_pair('Y','G'));	Rotors[5].push_back(make_pair('Z','S'));

	Rotors[6].push_back(make_pair('A','R'));	Rotors[6].push_back(make_pair('B','D'));
	Rotors[6].push_back(make_pair('C','O'));	Rotors[6].push_back(make_pair('D','B'));
	Rotors[6].push_back(make_pair('E','J'));	Rotors[6].push_back(make_pair('F','N'));
	Rotors[6].push_back(make_pair('G','T'));	Rotors[6].push_back(make_pair('H','K'));
	Rotors[6].push_back(make_pair('I','V'));	Rotors[6].push_back(make_pair('J','E'));
	Rotors[6].push_back(make_pair('K','H'));	Rotors[6].push_back(make_pair('L','M'));
	Rotors[6].push_back(make_pair('M','L'));	Rotors[6].push_back(make_pair('N','F'));
	Rotors[6].push_back(make_pair('O','C'));	Rotors[6].push_back(make_pair('P','W'));
	Rotors[6].push_back(make_pair('Q','Z'));	Rotors[6].push_back(make_pair('R','A'));
	Rotors[6].push_back(make_pair('S','X'));	Rotors[6].push_back(make_pair('T','G'));
	Rotors[6].push_back(make_pair('U','Y'));	Rotors[6].push_back(make_pair('V','I'));
	Rotors[6].push_back(make_pair('W','P'));	Rotors[6].push_back(make_pair('X','S'));
	Rotors[6].push_back(make_pair('Y','U'));	Rotors[6].push_back(make_pair('Z','Q'));

	return Rotors;
}