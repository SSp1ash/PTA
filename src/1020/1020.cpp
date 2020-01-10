#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
class yuebing{
	public:
		double stock;
		double priceSum;
		double price;
		yuebing(){
			stock=0;
			price=0;
			priceSum=0;
		}
};
bool cmp(yuebing a,yuebing b){
	if(a.price>=b.price) return 1;
	else return 0;
}
void sellYuebing(){
	int n,d;
	cin>>n>>d;
	vector<yuebing> y(n);
	for(int i=0;i<n;i++){
		cin>>y[i].stock;
	}
	for(int i=0;i<n;i++){
		cin>>y[i].priceSum;
		y[i].price=y[i].priceSum/y[i].stock;
	}
	sort(y.begin(),y.end(),cmp);
	double profit=0;
	int i=0;
	
	while(i<y.size()){
		if(d>y[i].stock){
			d-=y[i].stock;
			profit+=y[i].priceSum;
		}else{
			profit+=y[i].price*d;
			break;
		}
		i++;
	}
	cout<<fixed<<setprecision(2)<<profit;
}
int main(){
	sellYuebing();
}
