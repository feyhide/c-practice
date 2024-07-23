#include<stdio.h>
int main(){
	int m1,n1;
	FILE *fp=fopen("readme.txt","r+");
	fscanf(fp,"%d,%d",&m1,&n1);
	int arr1[m1][n1];
	for(int i = 0;i<m1;i++){
		for(int j = 0;j<n1;j++){
			fscanf(fp,"%d",&arr1[i][j]);
		}
	}
	int m2,n2;
	fscanf(fp,"%d,%d",&m2,&n2);
	int arr2[m2][n2];
	for(int i = 0;i<m2;i++){
		for(int j = 0;j<n2;j++){
			fscanf(fp,"%d",&arr2[i][j]);
		}
	}
	for(int i = 0;i<m1;i++){
		for(int j = 0;j<n1;j++){
			printf("%d",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0;i<m2;i++){
		for(int j = 0;j<n2;j++){
			printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
