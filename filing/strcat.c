#include<stdio.h>
#include<string.h>
char nospacemode(char string[],int *i){
	char *token,*token2[100];
	char result[100];
	int count2=0,flag=0,j=1;
	token = strtok(string,"</a>");
	printf("%s",token);
	int l = strlen(token);
	(*i)+=l+2;
	token2[0]=strtok(token," ");
	while(token2[count2]!=NULL){
		count2++;
		token2[count2]=strtok(NULL," ");
	}
	strcpy(result,token2[0]);
	if(count2>1){
		while(j!=count2){
			strcat(result,token2[j]);
			j++;
		}
	}
}
int main(){
    char a[]="hello world <a>nice</a>";
    char d[]="<a>";
    char b[]="</a>";
    FILE* fp=fopen("concat.txt","r");
	char string[1000];
	fgets(string,sizeof(string),fp);
	string[strcspn(string,"\n")] = '\0';
	int i = 0,flag=0;
	while(string[i]!='\0'){
		if(flag==1){
			printf("%s", nospacemode(string,&i));
		}
		if(string[i]=='<'&&string[i+1]=='a'&&string[i+2]=='>'){
			i+=3;flag=1;
		}else{
			printf("%c",string[i]);
			i++;
		}
	}
    return 0;
}
