#include<stdio.h>
int main(){
	int sum=0,r,c,i,j;
	
	printf("ENTER R AND C ");
	scanf("%d %d",&r,&c);
	
	int arr[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr[i][j]);
			sum += arr[i][j];
		}		
	}
	
	printf("SUM OF THE ARRAY IS %d",sum);
}