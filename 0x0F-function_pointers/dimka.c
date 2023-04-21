#include <stdio.h>
void print(int x)
{
return;
}
int main()
{

void (*ptr)(int);
ptr=print;
printf("%p\n",print);
printf("%p\n",ptr);
return 0;

}
