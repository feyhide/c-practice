#include<stdio.h>
int foundd(int found,int arr[],int size){
	if(size<0){
		return 0;
	}
	if(arr[0]==found){
		return 1;
	}else{
		return foundd(found,(arr+1),(size-1));
	}
}
int main(){
	int arr[5]={0,0,1,4,5};
	int size = 5;
	int found = 10;
	int ans = foundd(found,arr,size);
	if(ans==1){
		printf("found");
	}else{
		printf("NOT");
	}
	return 0;
}
