#include<stdio.h>
int main(){
	int sum,max=0,r,c,i,j;
	
	printf("ENTER R AND C ");
	scanf("%d %d",&r,&c);
	
	int arr[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}		
	}
	
	for(i=0;i<r;i++){
		sum=0;
		for(j=0;j<c;j++){
			sum += arr[i][j];
		}
		if(sum>max){
			max = i;
		}		
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==max){
				printf("%d ",arr[i][j]);		
			}
		}		
	}
	
}