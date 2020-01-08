#include<iostream>
#include<string>
using namespace std;
void deCode(string a,string b,string c,string d){
	int i,j;
	i=j=0;
	int flag=0;
	while(i<a.size()&&j<b.size()){
		if(a[i]==b[j]&&flag==0&&a[i]>='A'&&a[i]<='G'){
			int x1=a[i]-'A'+1;
				switch(x1){
					case 1:cout<<"MON";break;
					case 2:cout<<"TUE";break;
					case 3:cout<<"WED";break;
					case 4:cout<<"THU";break;
					case 5:cout<<"FRI";break;
					case 6:cout<<"SAT";break;
					case 7:cout<<"SUN";break;
				}
			cout<<" ";
			flag=1;
			i++;j++;
			}
		if(a[i]==b[j]&&flag==1&&((a[i]>='0'&&a[i]<='9')||(a[i]>='A'&&a[i]<='N'))){
			if(a[i]>='0'&&a[i]<='9'){
				cout<<0<<a[i]-'0'<<":";
			}else{
				cout<<a[i]-'A'+10<<":";
			}
			break;
		}
		i++;
		j++;	
		}
	i=j=0;
	while(i<c.size()&&j<d.size()){
		if(c[i]==d[j]&&((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))){
			if(i<10){
				cout<<0;
			}
			cout<<i;
			break;
		}
		i++;
		j++;
	}
}
int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	deCode(a,b,c,d);
	return 0;
	
}
