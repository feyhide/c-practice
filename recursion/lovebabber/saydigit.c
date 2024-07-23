#include<stdio.h>
char arr[][100]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
void saydigit(int n){
	if(n==0){
		return;
	}
	int a = n%10;
	saydigit(n/10);
	printf("%s",arr[a]);
}

int main(){
	int n;
	scanf("%d",&n);
	saydigit(n);
}
