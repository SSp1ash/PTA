#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string low[13]={"tret" ,"jan", "feb","mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string high[13]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo","syy", "lok", "mer", "jou"};
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string input;
		getline(cin,input);
		if(input[0]>='0'&&input[0]<='9'){
			int temp=atoi(input.c_str());
			string second=low[temp%13];
			temp/=13;
			string first=high[temp%13];
			if(first.size()>0&&second!="tret")
			cout<<first<<" "<<second<<endl;
			else if(first.size()>0&&second=="tret") cout<<first<<endl;
			else cout<<second<<endl;
		}else{
			if(input.size()>3){
				int out=0;
				string first=input.substr(0,3);
				string second=input.substr(4,3);
				for(int i=0;i<13;i++){
					if(first==high[i]){
						out+=13*i;
						break;
					}
				}
				for(int i=0;i<13;i++){
					if(second==low[i]){
						out+=i;
					}
				}
				cout<<out<<endl;
			}else{
				for(int i=0;i<13;i++){
					if(input==low[i]){
						cout<<i<<endl;;
					}else if(input==high[i]){
						cout<<13*i<<endl;
					}
					
				}
			}
		}
	}
}
