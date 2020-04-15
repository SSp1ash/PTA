#include<iostream>
#include<string>
using namespace std;
void oldKeyboard(string a,string b){
	int word[128]={0};
	for(int i=0;i<b.size();i++){
		if(b[i]>='a'&&b[i]<='z')
		b[i]-=32;
		word[b[i]]=1;
	}
	for(int i=0;i<a.size();i++){
		if(a[i]>='a'&&a[i]<='z')
		a[i]-=32;
		if(word[a[i]]==0){
			cout<<a[i];
			word[a[i]]=-1;
		}
	}
}
int main(){
	string a,b;
	cin>>a>>b;
	oldKeyboard(a,b);
}
