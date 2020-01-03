#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	if(a>b){
		return 1;
	}else{
		return 0;
	}
}
vector<int> check(int n){
	vector<int> result;
	while(n>1){
		if(n%2==0){
			n/=2;
			result.push_back(n);
		}else{
			n=(3*n+1)/2;
			result.push_back(n);
		}
	}
	return result;
}
vector<int> crucialNum(map<int,int> mp){
	map<int,int>::iterator iter;
	iter=mp.begin();
	while(iter!=mp.end()){
		if(iter->second==2){
			iter++;
			continue;
		}else{
			vector<int> temp=check(iter->first);
			for(int i=0;i<temp.size();++i){
				if(mp[temp[i]]==1){
					mp[temp[i]]=2;
				}
			}
			iter++;
		}
	}
	iter=mp.begin();
	vector<int> result;
	while(iter!=mp.end()){
		if(iter->second==1){
			result.push_back(iter->first);
		}
		iter++;
	}
	sort(result.begin(),result.end(),cmp);
	return result;
}
int main(){
	int n;
	cin>>n;
	map<int,int> mp;
	while(n--){
		int num;
		cin>>num;
		mp[num]=1;
	}
	auto result=crucialNum(mp);
	for(int i=0;i<result.size();++i){
		cout<<result[i];
		if(i==result.size()-1) break;
		cout<<" ";
	}
	
	return 0;
}
