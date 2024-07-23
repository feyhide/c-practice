#include <stdio.h>
//int main(){

//    FILE * fpointer = fopen("Students.txt", "w"); // w = write OR overwrite

//    fprintf(fpointer, "fahad , topper\nusaid , dumy\nhuzaifa , bongo");
    
//    pclose(fpointer);
    
//    return 0;
//}

//int main(){

//    FILE * fpointer = fopen("Students.txt", "a"); // a = append

//    fprintf(fpointer, "\nfahad , topper\nusaid , dumy\nhuzaifa , bongo");
    
//    pclose(fpointer);
    
//    return 0;
//}

int main(){
    char line[200];
    FILE * fpointer = fopen("Students.txt", "r"); // r = read

    fgets(line, 200, fpointer);// if you want to print another line next to 1 then print this  line again
    printf("%s", &line);

    pclose(fpointer);
    
    return 0;
}