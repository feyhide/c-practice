#include<stdio.h>
#include<stdlib.h>

int i =0;
int** blitz(int arr[]){
	int arr2[100],j=0,x=0;
	int** arrreturn = (int**) malloc(sizeof(int*)*i-1);
	for(j = 0; j<i; j++){
		x=0;
		arrreturn[j]= (int*) malloc(sizeof(int)*1);
		while(arr[j]>0){
			if(arr[j]%2==0){
				arr[j]=arr[j]/2;
			}else{
				arr[j]=arr[j]-1;
			}
			arrreturn[j][x++]=arr[j];
			arrreturn[j] = realloc(arrreturn[j],sizeof(int)*(x+1));
		}
	}
	return arrreturn;
}
int main(){
	int arr[1000];
	for(i = 0; i >= 0; i++){
		scanf("%d",&arr[i]);
		if(arr[i]<0){
			break;
		}
	}
	printf("--------------\n");
	int ** arrres = blitz(arr);
	for(int j = 0 ; j < i;j++){
		int m=0;
		while(arrres[j][m]!=0){
			printf("%d ",arrres[j][m]);
			m++;
		}
		printf("\n");
	}	
	return 0;
}
