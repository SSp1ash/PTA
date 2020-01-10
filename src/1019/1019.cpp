#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void buling(string &a){
	int size=a.size();
	for(int i=0;i<4-size;i++){
		a='0'+a;
	}
}
void numBlakHole(int num){
	string temp1,temp2;
	temp2=to_string(num);
	sort(temp2.begin(),temp2.end());
	buling(temp2);
	temp1=temp2;
	reverse(temp1.begin(),temp1.end());
	if(temp1==temp2){
		cout<<temp1<<" - "<<temp1<<" = 0000";
		return;
	}
	string temp;
	while(temp!="6174"){
		temp=to_string(atoi(temp1.c_str())-atoi(temp2.c_str()));
		buling(temp);
		cout<<temp1<<" - "<<temp2<<" = "<<temp;
		if(temp!="6174")
		cout<<endl;
		temp2=temp;
		sort(temp2.begin(),temp2.end());
		buling(temp2);
		temp1=temp2;
		reverse(temp1.begin(),temp1.end());
	}
}
int main(){
	int n;
	cin>>n;
	numBlakHole(n);
}
