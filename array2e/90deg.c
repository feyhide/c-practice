#include<stdio.h>

int main(){
    int i,j,n;
    printf("enter n");
    scanf("%d",&n);
    int arr2d[n][n];

    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr2d[i][j]);
		}		
	}
    printf("ORIGINAL\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr2d[i][j]);
		}
		printf("\n");		
	}
	printf("\n\n\n");		
    
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
            int temp = arr2d[i][j];
			arr2d[i][j] = arr2d[j][i];
            arr2d[j][i] = temp;
		}
    }	

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr2d[i][j]);
		}
		printf("\n");		
	}

	for(i=0;i<n;i++){
		int k = n-1;j=0;
        while (j<k)
        {
            int temp = arr2d[i][j];
			arr2d[i][j] = arr2d[i][k];
            arr2d[i][k] = temp;
            j++;k--;
        }
        
		printf("\n");		
	}
	
    printf("ROTATED\n");
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr2d[i][j]);
		}
		printf("\n");		
	}
    return 0;
}