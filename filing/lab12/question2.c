#include<stdio.h>
#include<stdbool.h>

typedef struct {
    int num1,num2,num3;
}number;
number n1,n2;

bool writeandread(char str[]){
    FILE* fp = fopen("binary.bin","wb+");
    fwrite(&n1,sizeof(number),1,fp);
    fseek(fp,0,SEEK_SET);
    ftell(fp);
    fread(&n2,sizeof(number),1,fp);
    
    fclose(fp);
}

int main(){
    n1.num1=1;n1.num2=2;n1.num3=3;
    writeandread("binary.bin");
    printf("%d\n%d\n%d\n",n2.num1,n2.num2,n2.num3);
    return 0;
}
