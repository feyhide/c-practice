#include<stdio.h>
#include<stdbool.h>
bool search(int arr[],int s,int e,int f){
	if(s>e){
		return false;
	}
	int mid = s + (e-s)/2;
	if(arr[mid]==f){
		return true;
	}
	if(arr[mid]>f){
		search(arr,s,mid-1,f);
	}else if(arr[mid]<f){
		search(arr,mid+1,e,f);
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	int size = 5;
	int found = 2;
	bool ans = search(arr,0,5,found);
	if(ans){
		printf("Found");
	}
}
