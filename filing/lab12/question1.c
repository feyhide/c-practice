#include<stdio.h>
#include<string.h>

int x=0;

void printingfile(){
	FILE* fp = fopen("data.txt","r");
	char line[5][1000];
    for (int i = 0; i < 1000; i++) {
    	if (fgets(line[i], 1000, fp) == NULL) {
        	break;
    	}
    	line[i][strcspn(line[i], "\n")] = '\0';
    	printf("%s\n",line[i]);
	}
    fclose(fp);
    
}
void askingandwriting(char line[][1000],int start,int end){
	FILE *fp;
	if(x!=0){
		fp = fopen("data.txt","a");
	}else{	
		fp = fopen("data.txt","a");
	}
	
	for(int i=start;i<end;i++){
		fgets(line[i],sizeof(line[i]),stdin);
		line[i][strcspn(line[i],"\n")]='\0';
		fprintf(fp,"%s\n",line[i]);
	}
	
    fclose(fp);
}

int main(){
	FILE* fp = fopen("data.txt","w");
	char line[5][1000];
	printf("WRITE THREE LINES IN THE FILE\n");
	askingandwriting(line,0,3);
	printf("CURRENT FILE TEXT\n");
	printingfile();
	x++;
	printf("WRITE TWO MORE LINES IN THE FILE\n");
	askingandwriting(line,3,5);
	printf("UPDATED FILE TEXT\n");
	printingfile();
    fclose(fp);
	return 0;
}
