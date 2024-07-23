#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return power(a,b/2)*power(a,b/2);
    }else{
        return a*power(a,b/2)*power(a,b/2);
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;

}