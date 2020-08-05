#include<stdio.h>

int main()
{
   int intType;
   float floatType;
   double doubleType;
    char charType;
    
    printf("size of int is: %d bytes\n",sizeof(intType));
    printf("size of float is: %d bytes\n",sizeof(floatType));
    printf("size of double is: %d bytes\n",sizeof(doubleType));
    printf("size of char is: %d byte\n",sizeof(charType));
    
   return 0;
}
