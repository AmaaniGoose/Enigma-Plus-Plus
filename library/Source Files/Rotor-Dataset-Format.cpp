#include<bits/stdc++.h>
using namespace std;

int main(){
	int r=0;
	string str;
	while(cin>>str){
		for(int i=0;i<26;i+=2)
			cout<<"Rotors["<<r<<"].push_back(make_pair('"<<char(65+i)<<"','"<<str[i]<<"'));\tRotors["<<r<<"].push_back(make_pair('"<<char(66+i)<<"','"<<str[i+1]<<"'));"<<endl;
		cout<<endl;
		r++;
	}
}