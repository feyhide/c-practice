#include<stdio.h>
int waterplant(int n,int n1,int n2){
	if(n1%5==0){
		printf("%d",n1);
		return 1;
	}else if(n2%5==0){
		printf("%d",n2);
		return 1;
	}
	waterplant(n,++n1,--n2);
}
int main(){
	int n;
	scanf("%d",&n);
	waterplant(n,n,n);
	return 0;
}
