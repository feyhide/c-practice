#include <stdio.h>

//int max(int num1, int num2){
//    int result;
//
//   if(num1 >= num2){
//        result = num1;
//    } else {
//        result = num2;
//    }
//    return printf("%d", result);
//}

//int main(){
//    max(2,4);
//    return 0;
//}
//////////////////////////////////////////
//int max(int num1, int num2, int num3){
//    int result;

//    if(num1 >= num2 && num1 >= num3){
//        result = num1;
//    } else if(num2 >= num1 && num2 >= num3){
//        result = num2;
//    } else{
//        result = num3;
//    }
//    return printf("%d", result);
//}

//int main(){
//    max(2,4,10);
//    return 0;
//}
/////////////////////////////////////////////
int name(int name1,int name2,int name3){
    int result;

    if(name1 == name2 || name1 == name3){
        result = name1;
    } else if(name2 == name3){
        result = name2;
    } else{
        result = 0;
    }
    return printf("%d", result);
    }

    int main(){
      name(2,3,3);
      return 0;

}