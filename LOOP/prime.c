#include<stdio.h>

int main(){
    int prime,n1=0,n2=5,i,j;
    for (i = n1; i <= n2; i++)
    {
		prime = 1;
		if(i!=2){
			for(j=2;j<i;j++){
	 		if(i%j==0) prime = 0;
		}
		}
        if(i==1||i==0){
        	prime = 0;
		}
		if(prime==1){
        	printf("%d",i);
		}
    }
    
    return 0;
}
