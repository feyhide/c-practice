#include<stdio.h>

int main(){
    int i,j,n,m;
    printf("enter m n");
    scanf("%d %d",&m,&n);
    int arr2d[m][n];

    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr2d[i][j]);
		}		
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr2d[i][j]);
		}
		printf("\n");		
	}
	printf("\n\n\n");		

    for(i=0;i<n;i++){
		for(j=0;j<m;j++){
            int temp = arr2d[i][j];
			arr2d[i][j] = arr2d[j][i];
            arr2d[j][i] = temp;
		}
        printf("\n");		
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr2d[i][j]);
		}
		printf("\n");		
	}
	
	
    return 0;
}