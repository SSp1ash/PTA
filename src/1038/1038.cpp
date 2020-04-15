#include<cstdio>
#include<map>
using namespace std;
map<int,int> mp;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num;
		scanf("%d",&num);
		mp[num]++;
	}
	scanf("%d",&n);
	while(n--){
		int num;
		scanf("%d",&num);
		printf("%d",mp[num]);
		if(n>0){
			printf(" ");
		}
	}
}
