#include<stdio.h>
int sum = 0,count = 0;
void summed(int arr[],int size){
	if(count==size){
		return;
	}
	sum+=arr[count];
	count++;
	summed(arr,size);
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int size=6;
	summed(arr,size);
	printf("%d",sum);
	return 0;
}
