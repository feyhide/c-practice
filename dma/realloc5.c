#include<stdio.h>
#include<stdlib.h>

int main(){
	int x=1;
	int *arr=(int*)malloc(sizeof(int)*x);
	int i;
	for(i = 0; i >= 0; i++){
		scanf("%d",&arr[i]);
		if(arr[i]<0){
			break;
		}
		x++;
		arr = realloc(arr,sizeof(int)*x);
	}
	printf("--------------\n");
		int m = 0;
		while(arr[m]!=-1){
			printf("%d ",arr[m]);
			m++;
		}
	return 0;
}
