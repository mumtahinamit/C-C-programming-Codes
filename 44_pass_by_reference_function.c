#include<stdio.h>
int main()
{
    int num1 = 20, num2 = 40;
    void swap(int *n1, int *n2);
    int* lol=&num1;
    swap( lol, &num2);
    printf("num1 : %d \nnum2 : %d",num1,num2);
    return 0;
}
void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}