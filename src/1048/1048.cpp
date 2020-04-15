#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string a,b;
	string c;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int len1=a.length();
	int len2=b.length();
	int len=max(len1,len2);
	if(len1-len2>0){
		for(int i=0;i<len1-len2;i++){
			b+='0';
		}
	}else{
		for(int i=0;i<len2-len1;i++){
			a+='0';
		}
	}
	for(int i=0;i<len;i++){
		if(i%2==0){
			int temp;
			temp=(a[i]-'0'+b[i]-'0')%13;
			switch(temp){
				case 10:c+='J';break;
				case 11:c+='Q';break;
				case 12:c+='K';break;
			}
			if(temp<10){
				c+=temp+'0';
			}
		}else{
			int temp;
			temp=b[i]-a[i];
			if(temp<0){
				temp+=10;
			}
			c+=temp+'0';
		}
	}
	
	
	reverse(c.begin(),c.end());
	cout<<c;
}
