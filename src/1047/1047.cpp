#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> m;
	map<int,int>::iterator iter;
	while(n--){
		int x,y,z;
		scanf("%d-%d %d",&x,&y,&z);
		m[x]+=z;
	}
	int max=0;int maxNum=0;
	for(iter=m.begin();iter!=m.end();iter++){
		if(iter->second>=max){
			max=iter->second;
			maxNum=iter->first;
		}
	}
	cout<<maxNum<<" "<<max;
}
