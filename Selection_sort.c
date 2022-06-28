#include<stdio.h>
int arr[5];
void main(){
for (int i = 0; i < 5; i++)
{
    printf("enter the value of %d element of array :",i);
    scanf(&arr[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("the value of %d element of array is %d",i,arr[i]);

}
}
