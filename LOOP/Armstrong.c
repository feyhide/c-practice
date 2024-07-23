#include<stdio.h>
#include<math.h>


int main(){
    int temp,digits,i,a,reminder,result;

    for (i = 1; i <= 10000; i++)
    {   
        result = 0; // Result reset hona loop mein zaroori hai warna armstrong nhi niklega it will add more and more
        digits = 0; // digits reset hona loop mein zaroori hai warna armstrong nhi niklega it will add more and more
        temp = i;
        a=i;
        while (a != 0) // digits count honge
        {
            a /= 10;  
            digits++;         
        }
        a = i;         //wapis a=i because isse uper a=0 hogaya hai
        while (a != 0)
        {
            reminder = a % 10;
            result += pow(reminder,digits);
            a /= 10;
        }
        if (result == temp)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}