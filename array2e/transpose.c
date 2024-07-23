#include<stdio.h>

int main(){
    int arr2d[3][2],arr2d2[2][3],i,j;
    for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr2d[i][j]);
		}		
	}

	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr2d[i][j]);
		}
		printf("\n");		
	}

    for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			arr2d2[i][j] = arr2d[j][i];
            printf("%d ",arr2d2[i][j]);
		}
        printf("\n");		
	}
	
	
    return 0;
}