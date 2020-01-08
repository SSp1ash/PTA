#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;
vector<double> classfy(vector<int> arr){
	int x1,x2,x3,x4,x5;
	x1=x2=x3=x4=x5=0;
	int i=0;
	int count4=0;
	int count2=0;
	while(i<arr.size()){
		if(arr[i]%10==0){
			x1+=arr[i];
		} 
		if(arr[i]%5==1){
			x2+=(arr[i]*pow(-1,count2));
			count2++;
		}
		if(arr[i]%5==2){
			++x3;
		} 
		if(arr[i]%5==3){
			x4+=arr[i];
			count4++;
		}
		if(arr[i]%5==4) x5=max(arr[i],x5);
		i++;
	}
	double dx4;
	if(x4!=0) dx4=(double)x4/(double)count4;
	else dx4=0;
	vector<double> result;
	result.push_back(x1);
	if(x2==0&&count2!=0) result.push_back(-1);
	else result.push_back(x2);
	result.push_back(x3);
	result.push_back(dx4);
	result.push_back(x5);
	return result;
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n,0);
	int x;
	int i=0;
	while(cin>>arr[i]){
		if(cin.get()=='\n') break;
		i++;
	}
	auto result=classfy(arr);
	i=0;
	while(i<result.size()){
		cout<<setiosflags(ios::fixed);
		if(result[i]==0) cout<<"N";
		else if(result[i]==-1) cout<<"0";
		else if(i==3){
			cout<<setprecision(1)<<result[i];
		} 
		else cout<<setprecision(0)<<result[i];
		if(i==result.size()-1) break;
		cout<<" ";
		i++;
	}
	return 0;
	
}
