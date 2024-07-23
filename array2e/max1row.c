#include<stdio.h>
int main(){
	int arr[2][3]={{1,0,1},{1,1,1}};
	int sum,max=0,r,c,i,j;
	
	for(i=0;i<2;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum += arr[i][j];
		}
		if(sum>max){
			max = i;
		}		
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(i==max){
				printf("%d ",arr[i][j]);		
			}
		}		
	}
	
}