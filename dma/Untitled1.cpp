#include<stdio.h>
int main(){
	int m,n;
	FILE *fp=fopen("readme.txt","r+");
	fscanf(fp,"%d,%d",&m,&n);
	printf("%d %d",m,n);
	return 0;
}
