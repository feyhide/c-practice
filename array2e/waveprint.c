#include<stdio.h>
int main(){
	int arr[3][3],i,j,k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("ENTER %dx%d ELEMENT ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}		
	}
	
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");		
	}
	printf("\n\n\n");	
	
    
    for(i=0;i<3;i++){
            if(i==0){
                for (k = 2; k >= 0; k--)
                {
                    printf("%d ",arr[i][k]);
                }
            }else if(i==1){
                for (k = 2; k >= 0; k--)
                {
                    printf("%d ",arr[i][k]);
                }
            }else if(i==2){
                for (k = 0; k < 3; k++)
                {
                    printf("%d ",arr[i][k]);
                }
		}
		printf("\n");		
	}

}
