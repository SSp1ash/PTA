#include<iostream>
using namespace std;
int galleon=17*29;
int sickle=29;
int main(){
	int x1,x2,x3;
	int y1,y2,y3;
	scanf("%d.%d.%d",&x1,&x2,&x3);
	scanf("%d.%d.%d",&y1,&y2,&y3);
	int pay;
	pay=x1*17*29+x2*29+x3;
	int change;
	change=y1*17*29+y2*29+y3;
	change=change-pay;
	if(change<0){
		cout<<"-";
		change*=-1;
	}
	printf("%d.%d.%d",change/galleon,change%galleon/sickle,change%sickle);
}
