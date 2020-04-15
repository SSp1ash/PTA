#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int score[n+1]={0};
	int maxs=-1;
	int maxi=-1;
	while(n--){
		int i;
		int s;
		cin>>i>>s;
		score[i]+=s;
		if(score[i]>maxs){
			maxs=score[i];
			maxi=i;
		}
	}
	cout<<maxi<<" "<<maxs;
	
}
