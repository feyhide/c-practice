#include<stdio.h>
#include<string.h>
void writeinfile(FILE *fp){
    char string[1000];
    printf("WRITE STRINGS IN FILE\n");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string, "\n")] = '\0';
    fprintf(fp,"%s\n",string);
}
void readfromfile(FILE *fp){
	int i=0;	
	char string[100][1000];
	fseek(fp,0,SEEK_SET);
	while(fgets(string[i],sizeof(string[i]),fp)!=NULL){
		string[i][strcspn(string[i], "\n")] = '\0';
		i++;
	}
	for(int j = 0;j<i;j++){
		printf("%s\n",string[j]);
	}
}
int main(){
    FILE *fp = fopen("howtoreadandwrite(noofstrings).txt","w+");
    writeinfile(fp);
    writeinfile(fp);
    writeinfile(fp);
    readfromfile(fp);
    fclose(fp);
    return 0;
}
