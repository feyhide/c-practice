#include<stdio.h>
int main(){
	int arr[2][2],arr2[2][2],arrres[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}		
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
			arrres[i][j]=arr2[i][j]+arr[i][j];
		}		
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",arrres[i][j]);
		}
		printf("\n");		
	}
	
	
}
