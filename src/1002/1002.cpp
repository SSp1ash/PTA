#include<iostream>
#include<string>
#include<vector>
using namespace std;
void write(string input){
	vector<string> diction={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i=0;i<input.size();++i){
		cout<<diction[input[i]-'0'];
		if(i==input.size()-1) break;
		cout<<" ";
	}
}
string cal(string input){
	int sum=0;
	for(int i=0;i<input.size();++i){
		sum+=input[i]-'0';
	}
	return to_string(sum);
}
int main(){
	string input;
	cin>>input;
	write(cal(input));
	return 0;
}
