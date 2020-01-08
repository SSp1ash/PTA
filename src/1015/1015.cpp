#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n,l,h;
class stu{
	public:
		string stuNo;
		int deSco;
		int caiSco;
		int sumSco;
		int classfy(int h){
			if(caiSco>=h&&deSco>=h) return 1;
			if(deSco>=h&&caiSco<h) return 2;
			if(deSco>=caiSco) return 3;
			else return 4;
		}
};
bool cmp(stu a,stu b){
	if(a.classfy(h)<b.classfy(h)) return 1;
	if(a.classfy(h)>b.classfy(h)) return 0;
	else{
		if(a.sumSco>b.sumSco) return 1;
		if(a.sumSco<b.sumSco) return 0;
		else{
			if(a.deSco>b.deSco) return 1;
			if(a.deSco<b.deSco)	return 0;
			else{
				if(a.stuNo<b.stuNo) return 1;
				else return 0;
			}		
		}
	}
}
void mainSort(vector<stu> &stus,int l){
	sort(stus.begin(),stus.end(),cmp);
}

int main(){
//	cin>>n>>l>>h;
	scanf("%d %d %d", &n, &l, &h);
	vector<stu> stus;
	while(n--){
		stu temp;
		char id[9];
		scanf("%s",id);
		temp.stuNo=id;
		scanf("%d%d",&temp.deSco,&temp.caiSco);
//		cin>>temp.stuNo>>temp.deSco>>temp.caiSco;
		temp.sumSco=temp.caiSco+temp.deSco;
		if(temp.caiSco>=l&&temp.deSco>=l)
		stus.push_back(temp);
	}
	mainSort(stus,l);
//	cout<<stus.size()<<endl;
	printf("%d\n",stus.size());
	for(int i=0;i<stus.size();i++){
//		cout<<stus[i].stuNo<<" "<<stus[i].deSco<<" "<<stus[i].caiSco;
		printf("%s %d %d",stus[i].stuNo.c_str(),stus[i].deSco,stus[i].caiSco);
		if(i==stus.size()-1) break;
		printf("\n");
	}
}
