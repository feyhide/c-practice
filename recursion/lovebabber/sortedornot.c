#include<stdio.h>
#include<stdbool.h>
bool issorted(int arr[],int size){
	if(size==0||size==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}else{
		return issorted((arr+1),(size-1));
	}
}
int main(){
	int arr[5]={1,1,1,4,5};
	int size = 5;
	bool ans = issorted(arr,size);
	if(ans){
		printf("sorted");
	}
	return 0;
}
