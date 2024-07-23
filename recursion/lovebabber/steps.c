#include<stdio.h>

int steps(int n){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	return steps(n-1)+steps(n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",steps(n));
}
