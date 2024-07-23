#include<stdio.h>
int main(){
	int r1,c1,r,c,i,j;
		
	printf("ENTER R AND C ");
	scanf("%d %d",&r,&c);
	
	int arr[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}		
	}
	
	printf("ENTER R AND C ");
	scanf("%d %d",&r1,&c1);
	int  arr1[r1][c1];	
	int arrres[r1][c1];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
			arrres[i][j]=arr1[i][j]+arr[i][j];
		}		
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",arrres[i][j]);
		}
		printf("\n");		
	}	
}
