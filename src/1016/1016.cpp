#include<iostream>
#include<iomanip>
using namespace std;
double partAaddB(string a,char da,string b,char db){
	string temp1,temp2;
	for(int i=0;i<a.size();i++){
		if(a[i]==da) temp1+=da;
	}
	for(int i=0;i<b.size();i++){
		if(b[i]==db) temp2+=db;
	}
	return atof(temp1.c_str())+atof(temp2.c_str());
}
int main(){
	string a;
	char da;
	string b;
	char db;
	cin>>a>>da>>b>>db;
	cout<<fixed<<setprecision(0)<<partAaddB(a,da,b,db);
}
