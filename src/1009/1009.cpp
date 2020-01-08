#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
void reverseWord(string input){
	int i=0;
	int j=0;
	while(i<input.size()){
		if(input[i]==' '||i==input.size()-1){
			if(i==input.size()-1) i++;
			reverse(input.begin()+j,input.begin()+i);
			j=i+1;
		}
		i++;
	}
	reverse(input.begin(),input.end());
	cout<<input;
}
int main(){
	string x;
	getline(cin,x);
	reverseWord(x);
}
