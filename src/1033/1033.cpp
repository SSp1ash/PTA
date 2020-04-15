#include<iostream>
#include<string>
using namespace std;
void oldKeyborard(string a,string b){
	int word[128]={0};
	for(int i=0;i<a.size();i++){
		if(a[i]=='+'){
			for(int j='A';j<='Z';j++){
                word[j]=1;
            }
		}
		word[a[i]]=1;
		if(a[i]>='A'&&a[i]<='z')
		word[a[i]+32]=1;
	}
	string::iterator it;
	it=b.begin();
    for(int i=0;i<b.size();i++){
    	if(word[b[i]]==0){
    		cout<<b[i];
		}
	}
}
int main(){
	string a,b;
	getline(cin,a);
	cin>>b;
	oldKeyborard(a,b);
	return 0;
}
