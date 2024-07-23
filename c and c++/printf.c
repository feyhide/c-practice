#include <stdio.h>

int main()
{
    // \n is for new line

    // Format Specifier ( %d for Numbers , %s for Characters , %f for Decimals )
    //  printf( format specifier , specifing);

    
    char name[] = "fahhdad";
    int number = 2000;
    double dNumber = 2.34;
    
    printf("my name is %s and my no is %d and my dno is %f \n", name, number , dNumber);
    // all in order means specifier

   // also int dealing int will give int
   // int dealing with decimals will give nothing
   // decimals dealing with int will give nothing
   // decimals dealing with decimal will give decimals
    printf("%f \n", 2+4); // no ans
    printf("%d \n", 2+32); // int
    printf("%d \n", 2.44+89); // no correct
    printf("%f \n", 2.4+23); // decimals

    return 0;
}