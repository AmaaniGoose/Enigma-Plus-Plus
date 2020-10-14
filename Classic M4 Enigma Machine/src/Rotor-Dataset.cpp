#include<vector>
using namespace std;

typedef vector<vector<pair<char,char>>> wheel;

static vector<vector<string>> data({"EKMFLGDQVZNTOWYHXUSPAIBRCJ","AJDKSIRUXBLHWTMCQGZNPYFVOE","BDFHJLCPRTXVZNYEIWGAKMUSQO","ESOVPZJAYQUIRHXLNFTGKDCMWB","VZBRGITYUPSDNHLXAWMJQOFECK","JPGVOUMFYQBENHZRDKASXLICTW","NZJHGRCXMYSWBOUFAIVLPEKQDT","FKQHTLXOCBJSPDZRAMEWNIUYGV"},{"LEYJVCNIXWPBQMDRTAKZGFUHOS","FSOKANUERHMBTIYCWLQPZXVGJD","ENKQAUYWJICOPBLMDXZVFTHRGS","RDOBJNTKVEHMLFCWZAXGYIPSUQ"})

wheel rotorSettings(){
    wheel rotors(8);

    for(int i=0;i<rotors.size();i++)
        for(int j=0;j<data[0][i].size();j++)
            rotors[i].push_back(make_pair(char(65+j),char(data[0][i][j])));

    return rotors;
}

wheel reflectorSettings(){
    wheel reflectors(4);

    for(int i=0;i<reflectors.size();i++)
        for(int j=0;j<data[1][i].size();j++)
            reflectors[i].push_back(make_pair(char(65+j),char(data[1][i][j])));

    return reflectors;
}