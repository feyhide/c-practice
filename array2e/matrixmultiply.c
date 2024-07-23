#include<stdio.h>
int main(){
	int arrres[2][2],arr1[2][2],arr2[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}		
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}		
	}
    int newrc = 2,k=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
            arrres[i][j]=0;
            for (k=0;k<newrc;k++){
                arrres[i][j] += arr1[i][k]*arr2[k][j];
            }        
        }
	}
    printf("\n\n1st Array\n");
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");		
	}
	printf("2nd Array\n");
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");		
	}
	
	printf("3rd Array\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arrres[i][j]);
		}
		printf("\n");		
	}

}
