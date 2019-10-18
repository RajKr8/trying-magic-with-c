#include<stdio.h>
int main()
{
    printf("Size of char: %ld byte\n",size(char));
    printf("Size of int: %ld bytes\n",size(int));
    printf("Size of float: %ld bytes\n",size(float));
    printf("Size of double: %ld bytes", size(double));
    return 0;
}
