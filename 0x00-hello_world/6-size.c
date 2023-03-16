#include<stdio.h>
/**
*main-Entry point
*
*Return:Always 0(Success)
*
*/
int main(void)
{
char charsize;
int intvalue;
long int long_int_size;
long long int long_long_int_size;
float float_size;

printf("Size of a char: %lu byte(s)\n", sizeof(charsize));
printf("Size of int: %lu byte(s)\n", sizeof(intvalue));
printf("Size of long int: %lu byte(s)\n", sizeof(long_int_size));
printf("Size of long long int: %lu byte(s)\n", sizeof(long_long_int_size));
printf("Size of float : %lu byte(s)\n", sizeof(float));
return (0);
}
