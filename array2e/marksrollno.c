#include<stdio.h>
int main(){
	int s,i,j;
	
	printf("ENTER NO OF STUDENTS ");
	scanf("%d",&s);
	
	int arr[s][2];
	for(i=0;i<s;i++){
		for(j=0;j<2;j++){
			if(j==1){
				printf("ENTER MARKS ");
				scanf("%d",&arr[i][j]);
			}else{
				printf("ENTER ROLL NO ");
				scanf("%d",&arr[i][j]);
			}
		}		
	}
	printf("RollNo\tMarks\n");
	for(i=0;i<s;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");		
	}

}