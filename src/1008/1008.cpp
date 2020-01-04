#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse(vector<int> &arr,int begin,int end){
	int i=begin;
	int j=end;
	while(i<j){
		arr[i]=arr[i]+arr[j];
		arr[j]=arr[i]-arr[j];
		arr[i]=arr[i]-arr[j];
		i++;
		j--;
	}
}
int main(){
	vector<int> arr;
	int n;
	int r;
	cin>>n>>r;
	r=r%n;
	r=n-r;
	while(n--){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	reverse(arr,0,r-1);
	reverse(arr,r,arr.size()-1);
	reverse(arr,0,arr.size()-1);
	vector<int>::iterator iter;
	iter=arr.begin();
	while(iter!=arr.end()){
		cout<<*iter++;
		if(iter==arr.end()) break;
		cout<<" ";
	}
	return 0;
}
