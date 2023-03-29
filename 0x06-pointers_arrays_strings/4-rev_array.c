/**
*reverse_array - Reserve an array
*@a: stored a pointer variable for the array
*@n:stored the length of array
*/
void reverse_array(int *a, int n)
{
int counter;

for (counter = 0; counter < n; counter++)
{
a[counter] = a[n];
}

}
