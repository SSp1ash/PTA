#include<iostream>
#include<vector>
#include<string>
using namespace std;
class people{
	public:
		string name;
		string birthday;
};
bool check(string birthday){
	if(birthday>="1814/09/06"&&birthday<="2014/09/06")
	return 1;
	else return 0;
}
bool cmp(people a,people b){
	if(a.birthday<b.birthday) return 1;
	else return 0;
}
int main(){
	int n;
	cin>>n;
	people oldest;
	people eldest;
	int flag=0;
	while(n--){
		people temp;
		cin>>temp.name>>temp.birthday;
		if(check(temp.birthday)){
			if(flag==0){
				oldest=temp;
				eldest=temp;
				flag++;
				continue;
			}
			if(cmp(temp,oldest)) oldest=temp;
			if(cmp(eldest,temp)) eldest=temp; 
			flag++;
		}
	}
	if(flag==0){
		cout<<0;
		return 0;
	}
	cout<<flag<<" "<<oldest.name<<" "<<eldest.name;
	return 0;
}
